# C++ 课程笔记

整理自狄泰软件《C++ 深度解析》第 1～3 课，共三节独立课程：

- **第 1 课**：理论课，原课程没有测试代码；本仓库补充了一个 C/C++ 对照示例，仅用于直观对比。
- **第 2、3 课**：原课程有测试代码，已整理为可编译的 demo，并保留桌面上的原始 `test_*.txt` 片段。

每课包含：

- 课程笔记：`lessons/NN-topic/README.md`
- 课件与实机截图：`lessons/NN-topic/images/`
- 测试/示例代码：`lessons/NN-topic/code/`（第 1 课为补充示例）

## 课程目录

| 课 | 主题 | 笔记 | 代码 | 主要内容 |
|---|---|---|---|---|
| 01 | 学习 C++ 的意义 | [笔记](lessons/01-cpp-meaning/README.md) | [补充示例](lessons/01-cpp-meaning/code) | C/C++ 关系、软件方法论、分层架构 |
| 02 | C 到 C++ 的升级 | [笔记](lessons/02-c-to-cpp/README.md) | [code](lessons/02-c-to-cpp/code) | register、全局变量、struct、函数声明 |
| 03 | 进化后的 const 分析 | [笔记](lessons/03-const/README.md) | [code](lessons/03-const/code) | const 的本质、符号表、const 与宏 |

## 仓库结构

```text
cpp/
├── CMakeLists.txt              # 顶层构建入口
├── CMakePresets.json           # debug / release 预设
├── cmake/
│   └── AddDemo.cmake           # cpp_add_demo() 辅助函数
├── lessons/
│   ├── 01-cpp-meaning/
│   │   ├── README.md
│   │   ├── images/             # 课件 slide-01 ~ slide-17
│   │   └── code/demo01/        # C / C++ 对照示例
│   ├── 02-c-to-cpp/
│   │   ├── README.md
│   │   ├── images/             # 课件 + 实机截图
│   │   └── code/demo01 ~ demo05
│   └── 03-const/
│       ├── README.md
│       ├── images/
│       └── code/demo01 ~ demo03
└── appendix/
    ├── 01-basics/              # 早期工程构建笔记（保留）
    └── 02-functions/           # 早期函数/多文件笔记（保留）
```

> `appendix/` 是之前整理的 C/C++ 工程基础内容，和本课程主题不同，保留下来供查阅，不再作为主线课程编号。

## 构建方式

构建脚本使用 Linux 工具链（`/usr/bin/gcc`、`/usr/bin/g++`、Ninja），建议在 Linux、WSL 或 CLion Gateway 的远程环境中执行。Windows 侧可以直接阅读和编辑 Markdown 与源码。

```bash
cd ~/work/note/cpp
cmake --preset debug
cmake --build --preset debug
ctest --preset debug --output-on-failure
```

只构建某一课：

```bash
cmake --build --preset debug --target cpp02u_register_c cpp02u_register_cpp
./build/debug/bin/cpp02u_register_c
./build/debug/bin/cpp02u_register_cpp
```

在 CLion / Gateway 中打开仓库根目录，选择对应的 target 即可 Run / Debug。

## 测试环境

以下结果均在 Ubuntu 22.04 虚拟机上实际构建、运行验证（2026-11-14）：

| 项目 | 配置 |
|---|---|
| 操作系统 | Ubuntu 22.04 LTS（VM，SSH 远程） |
| C 编译器 | GCC 11.4.0（`/usr/bin/gcc`） |
| C++ 编译器 | G++ 11.4.0（`/usr/bin/g++`） |
| CMake | 3.22.1 |
| 生成器 | Ninja 1.10.1 |
| C 标准 | C11（`-std=c11`，`CMAKE_C_EXTENSIONS=OFF`） |
| C++ 标准 | C++17（`-std=c++17`，`CMAKE_CXX_EXTENSIONS=OFF`） |
| 警告选项 | `-Wall -Wextra -Wpedantic` |
| 构建类型 | Debug（`-g`，无优化） |
| 测试框架 | CTest |

当前验证状态：

```text
23/23 tests passed
```

其中：

- 第 1 课补充示例：2 个 target / 2 个测试。
- 第 2 课：10 个 target / 10 个测试。
- 第 3 课：6 个 target / 6 个测试。
- appendix 旧示例：5 个 target / 5 个测试。

复现：

```bash
gcc --version | head -1
g++ --version | head -1
cmake --version | head -1
ninja --version
cmake --preset debug
cmake --build --preset debug
ctest --preset debug --output-on-failure
```

## 目标命名

| 前缀 | 含义 | 示例 |
|---|---|---|
| `cpp01m_` | 第 1 课（meaning） | `cpp01m_hello_c` |
| `cpp02u_` | 第 2 课（upgrade） | `cpp02u_register_cpp` |
| `cpp03c_` | 第 3 课（const） | `cpp03c_const_address_c` |
| `cpp01_` / `cpp02_` | appendix 中的旧示例 | `cpp01_demo01` |

## 新增一课

1. 新建目录：

   ```text
   lessons/04-topic/
   ├── README.md
   ├── images/
   └── code/
       ├── CMakeLists.txt
       └── demo01/
   ```

2. 在 `lessons/04-topic/code/CMakeLists.txt` 中定义 target：

   ```cmake
   cpp_add_demo(cpp04x_demo01 demo01/main.cpp)
   add_test(NAME cpp04x_demo01 COMMAND cpp04x_demo01)
   ```

3. 在顶层 `CMakeLists.txt` 中追加：

   ```cmake
   add_subdirectory(lessons/04-topic/code)
   ```

4. 在 CLion 中执行 **Reload CMake Project**。

## 素材说明

- `images/slide-XX.png`：课程课件原图，按页码命名。
- `images/shot-XX-*.png`：实机编译/运行截图，按主题命名。
- `code/demoNN/`：第 2、3 课为课程测试代码整理；第 1 课为补充示例。
- `code/original/`：桌面原始 `test_*.txt` 片段（第 2、3 课）。

示例中的“❌”注释表示该写法在当前语言中无法通过编译，保留在源码中是为了对照错误信息；实际参与构建的是注释外的合法代码。
