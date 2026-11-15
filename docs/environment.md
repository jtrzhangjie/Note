# 虚拟机与 Gateway 环境

## 虚拟机

| 项目 | 值 |
|---|---|
| 系统 | Ubuntu 22.04.5 LTS |
| 用户 | joyce |
| 主机名 | joyce-pc |
| IP | 192.168.157.128（静态，见下方配置） |
| 仓库路径 | `/home/joyce/work/note` |
| 旧工程 | `/home/joyce/course-demos`（已废弃，仅留作历史参考） |

静态 IP 配置在 `/etc/netplan/99-static-ens33.yaml`：

```yaml
network:
  version: 2
  renderer: NetworkManager
  ethernets:
    ens33:
      dhcp4: false
      dhcp6: false
      addresses:
        - 192.168.157.128/24
      routes:
        - to: default
          via: 192.168.157.2
      nameservers:
        addresses: [192.168.157.2, 223.5.5.5]
```

配套的宿主设置：`C:\ProgramData\VMware\vmnetdhcp.conf` 里 VMnet8 的 DHCP 池已改成 `192.168.157.129 ~ 254`，把 `.128` 让出来，避免 DHCP 再分配同一个地址。

改完用 `sudo netplan generate && sudo netplan apply` 生效。IP 固定后，`~/.ssh/config` 里的 `HostName` 不再随 DHCP 变化。

## SSH

Windows 的 `C:\Users\Administrator\.ssh\config`：

```sshconfig
Host ubuntu
  HostName 192.168.157.128
  User joyce
  ForwardAgent yes
```

验证：

```powershell
ssh ubuntu
```

## 工具链

| 工具 | 版本 |
|---|---|
| g++ | 11.4.0 |
| gcc | 11.4.0 |
| CMake | 3.22.1 |
| Ninja | 1.10.1 |
| GDB | 12.1 |
| Git | 2.34.1 |
| Git LFS | 3.0.2 |

## JetBrains Gateway

- Gateway：JetBrains Gateway 2026.2
- 后端 IDE：CLion 2026.2.4
- 后端位置：`/home/joyce/.cache/JetBrains/RemoteDev/dist/...`
- 连接方式：SSH，主机 `192.168.157.128`，用户 `joyce`
- **项目路径**：`/home/joyce/work/note/cpp`

打开的是 C++ 课程目录，不是仓库根目录。根目录没有 CMakeLists。

CLion 中确认工具链：

```text
Settings -> Build, Execution, Deployment -> Toolchains
C++ compiler: /usr/bin/g++
C compiler:   /usr/bin/gcc
CMake:        /usr/bin/cmake 或 CLion bundled
Build tool:   /usr/bin/ninja
Debugger:     /usr/bin/gdb
```

## 构建

在虚拟机终端：

```bash
cd ~/work/note/cpp
cmake --preset debug
cmake --build --preset debug
ctest --preset debug --output-on-failure
```

只编译一个 demo：

```bash
cmake --build --preset debug --target cpp02u_register_cpp
./build/debug/bin/cpp02u_register_cpp
```

CLion 使用自己的 `cmake-build-debug/` 也可以，两个构建目录互不影响。

## 旧工程说明

`/home/joyce/course-demos` 等早期工程里的 lesson01、lesson02 demo 已经全部废弃，不再迁入、也不再随仓库保留，避免和当前课程内容混淆。

仓库现在只包含整理后的三节课：

```text
cpp/lessons/01-cpp-meaning/
cpp/lessons/02-c-to-cpp/
cpp/lessons/03-const/
```

虚拟机只负责编译和验证，内容以 Windows 侧 `F:\Note` 提交到 GitHub 的版本为准。

## 常见问题：挂起恢复后 SSH 连不上

现象：VS Code / `ssh ubuntu` 连不上 `192.168.157.128`，`ping` 也不通，但 VMware 显示虚拟机在运行。

原因：虚拟机用 NAT 模式（`ethernet0.connectionType = "nat"`）。从挂起恢复时，VMware 只恢复了虚拟网卡（日志里有 `restoring Ethernet0`），但宿主机的 **VMware NAT Service** 和 **VMnetDHCP** 没有一起启动，客户机拿不到地址、也出不去。

排查：

```powershell
Get-Service 'VMware NAT Service','VMnetDHCP'
ping 192.168.157.128
```

如果两个服务是 `Stopped`，启动即可：

```powershell
Start-Service 'VMware NAT Service'
Start-Service 'VMnetDHCP'
```

服务起来后等几秒，客户机的 NetworkManager 会自动续租，`ping` 恢复。这台机器已经把两个服务改成 `Automatic`，并配置了失败后自动重启。

更省事的方式是直接跑仓库里的自检脚本，它会依次检查服务、VMnet8、ping、22 端口和 SSH 登录：

```powershell
powershell -ExecutionPolicy Bypass -File scripts\vm-check.ps1
```

其他需要确认的点：

- `VMware Network Adapter VMnet8` 是否处于 `Up`，IP 是否为 `192.168.157.1`。
- 静态 IP 是 `.128`，网关 `.2`；如果客户机网络异常，先在虚拟机里看 `ip route` 是否有默认路由。
- VS Code 连不上时先重试一次；如果还失败，执行 `Remote-SSH: Kill VS Code Server on Host` 再连。

## 已知限制：虚拟机访问 GitHub 不稳定

虚拟机内 `https://github.com` 经常连不上（`curl` 返回 `000`），但 `https://www.baidu.com`、`https://mirrors.aliyun.com` 正常，属于网络层面的访问限制，不是静态 IP 的问题。

虚拟机里的 `origin` 指向局域网 bare 仓库，日常拉取不受影响：

```text
origin  /home/joyce/git/note.git
```

需要从虚拟机直接访问 GitHub 时，给 Git 配代理即可（Windows 侧的代理端口按实际填写）：

```bash
git config --global http.proxy http://192.168.157.1:7890
```
