# 虚拟机连通性自检
# 用法：右键“使用 PowerShell 运行”，或在终端执行
#   powershell -ExecutionPolicy Bypass -File scripts\vm-check.ps1
#
# 适用场景：虚拟机从挂起恢复、或 Windows 休眠唤醒后，VS Code / ssh 连不上 Ubuntu。

$ErrorActionPreference = 'Continue'

$ip       = '192.168.157.128'
$services = @('VMware NAT Service', 'VMnetDHCP')

Write-Host '== 1. VMware 服务 ==' -ForegroundColor Cyan
foreach ($name in $services) {
    $svc = Get-Service -Name $name -ErrorAction SilentlyContinue
    if (-not $svc) {
        Write-Host ("  {0}: 未安装" -f $name) -ForegroundColor Red
        continue
    }
    if ($svc.Status -ne 'Running') {
        Write-Host ("  {0}: {1}，正在启动..." -f $name, $svc.Status) -ForegroundColor Yellow
        try {
            Start-Service -Name $name -ErrorAction Stop
        } catch {
            Write-Host ("    启动失败：{0}" -f $_.Exception.Message) -ForegroundColor Red
            Write-Host '    请用管理员权限重新运行本脚本。' -ForegroundColor Red
        }
    }
    $now = Get-Service -Name $name
    Write-Host ("  {0}: {1}" -f $name, $now.Status)
}

Write-Host '== 2. 主机虚拟网卡 ==' -ForegroundColor Cyan
$vmnet8 = Get-NetIPAddress -AddressFamily IPv4 -ErrorAction SilentlyContinue |
    Where-Object { $_.InterfaceAlias -match 'VMnet8' }
if ($vmnet8) {
    Write-Host ("  VMnet8: {0}/{1}" -f $vmnet8.IPAddress, $vmnet8.PrefixLength)
} else {
    Write-Host '  VMnet8 没有 IPv4 地址，检查 VMware 虚拟网络编辑器。' -ForegroundColor Red
}

Write-Host ("== 3. 等待 {0} 恢复网络 ==" -f $ip) -ForegroundColor Cyan
$ok = $false
for ($i = 1; $i -le 20; $i++) {
    if (Test-Connection -ComputerName $ip -Count 1 -Quiet -ErrorAction SilentlyContinue) {
        $ok = $true
        Write-Host ("  第 {0} 次探测：通" -f $i) -ForegroundColor Green
        break
    }
    Start-Sleep -Seconds 2
}
if (-not $ok) {
    Write-Host '  ping 一直不通。检查虚拟机是否在运行、网卡是否已连接。' -ForegroundColor Red
    Write-Host '  仍然不行就在 VMware 里执行：sudo systemctl restart NetworkManager' -ForegroundColor Yellow
    exit 1
}

Write-Host '== 4. SSH 端口 ==' -ForegroundColor Cyan
$ssh = Test-NetConnection -ComputerName $ip -Port 22 -InformationLevel Quiet -WarningAction SilentlyContinue
if ($ssh) {
    Write-Host '  22 端口开放' -ForegroundColor Green
} else {
    Write-Host '  22 端口不通。如果虚拟机能 ping 通，多半是 sshd 没起来。' -ForegroundColor Red
    Write-Host '  在 VMware 控制台执行：sudo systemctl status ssh' -ForegroundColor Yellow
    exit 1
}

Write-Host '== 5. 登录检查 ==' -ForegroundColor Cyan
$result = ssh -o BatchMode=yes -o ConnectTimeout=8 ubuntu 'hostname; uptime' 2>&1
if ($LASTEXITCODE -eq 0) {
    $result | ForEach-Object { Write-Host ("  " + $_) }
    Write-Host '连接正常，可以在 VS Code 里重新连接远程主机。' -ForegroundColor Green
} else {
    Write-Host '  SSH 登录失败：' -ForegroundColor Red
    $result | ForEach-Object { Write-Host ("  " + $_) }
    Write-Host '  如果之前连过，可在 VS Code 执行 “Remote-SSH: Kill VS Code Server on Host” 后重试。' -ForegroundColor Yellow
    exit 1
}
