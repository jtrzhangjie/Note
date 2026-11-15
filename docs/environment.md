# 虚拟机与 Gateway 环境

## 虚拟机

| 项目 | 值 |
|---|---|
| 系统 | Ubuntu 22.04.5 LTS |
| 用户 | joyce |
| 主机名 | joyce-pc |
| IP | 192.168.157.128（VMware NAT/DHCP，可能会变化） |
| 仓库路径 | `/home/joyce/work/note` |
| 旧工程 | `/home/joyce/course-demos`（已废弃，仅留作历史参考） |

如果虚拟机 IP 变化，需要同步修改 Windows 的 `~/.ssh/config` 和 Git remote。

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

服务起来后等几秒，客户机的 NetworkManager 会自动续租，`ping` 恢复。这台机器已经把两个服务改成 `Automatic`，避免每次恢复都要手动开。

其他需要确认的点：

- `VMware Network Adapter VMnet8` 是否处于 `Up`，IP 是否为 `192.168.157.1`。
- DHCP 租约文件 `C:\ProgramData\VMware\vmnetdhcp.leases` 里是否有这台 VM 的 MAC（`00:0c:29:a7:cd:26`）。
- VS Code 连不上时先重试一次；如果还失败，执行 `Remote-SSH: Kill VS Code Server on Host` 再连。
