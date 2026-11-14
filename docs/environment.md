# 虚拟机与 Gateway 环境

## 虚拟机

| 项目 | 值 |
|---|---|
| 系统 | Ubuntu 22.04.5 LTS |
| 用户 | joyce |
| 主机名 | joyce-pc |
| IP | 192.168.157.128（VMware NAT/DHCP，可能会变化） |
| 仓库路径 | `/home/joyce/work/note` |
| 旧工程 | `/home/joyce/course-demos`（保留作参考） |

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

`/home/joyce/course-demos` 是之前用 VS Code/CLion 验证过的工程，包含 lesson01、lesson02 的源码和 VS Code 配置。

新仓库已经把这些 demo 迁移到：

```text
cpp/lessons/01-basics/code/
cpp/lessons/02-functions/code/
```

旧工程不删除，作为对照保留。后续以 `/home/joyce/work/note` 为主。
