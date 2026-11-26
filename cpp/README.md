# C++ 课程笔记

整理自狄泰软件《C++ 深度解析》第 1～5 课：

- **第 1 课**：理论课，原课程没有测试代码；本仓库补充了一个 C/C++ 对照示例，仅用于直观对比。
- **第 2、3 课**：将课程测试代码按知识点整理为可编译的 demo。
- **第 4 课**：按实验整理可运行的 C/C++ 对照 demo，并记录同一份源码在两种语言模式下的表现。
- **第 5 课**：通过交换、`const` 引用、对象布局和返回值示例分析引用；故意写错的片段只用于笔记讲解。

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
| 04 | 布尔类型和引用 | [笔记](lessons/04-bool-and-reference/README.md) | [code](lessons/04-bool-and-reference/code) | `bool` 转换、条件表达式能否赋值、引用与指针 |
| 05 | 引用的本质分析 | [笔记](lessons/05-reference-internals/README.md) | [code](lessons/05-reference-internals/code) | 引用参数、`const` 引用、`sizeof`、引用与对象生命周期 |

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
│   ├── 03-const/
│   │   ├── README.md
│   │   ├── images/
│   │   └── code/demo01 ~ demo03
│   ├── 04-bool-and-reference/
│   │   ├── README.md
│   │   ├── images/             # 课件 slide-01 ~ slide-14
│   │   └── code/demo01 ~ demo04
│   └── 05-reference-internals/
│       ├── README.md
│       ├── images/             # 课件 slide-01 ~ slide-13
│       └── code/demo01 ~ demo05
```

早期工程的历史示例不再迁入，避免与已整理的课程混淆。

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

在 CLion / Gateway 中打开仓库的 `cpp/` 目录，选择对应的 target 即可 Run / Debug。

## 测试环境

项目的 Ubuntu 22.04 虚拟机工具链如下：

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

第 01–03 课于 2026-11-14 在该环境中验证通过（18/18）；后续验证见[第 04 课](lessons/04-bool-and-reference/README.md#验证记录)和[第 05 课](lessons/05-reference-internals/README.md#验证记录)。

各课的 CMake target / CTest 数量：

- 第 1 课补充示例：2 个 target / 2 个测试。
- 第 2 课：10 个 target / 10 个测试。
- 第 3 课：6 个 target / 6 个测试。
- 第 4 课：8 个 target / 8 个测试；C11 下预期的编译错误可按本课笔记单独复现。
- 第 5 课：6 个 target / 6 个测试；错误示例不参与默认构建。

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
| `cpp04b_` | 第 4 课（bool and reference） | `cpp04b_conditional_lvalue_cpp` |
| `cpp05r_` | 第 5 课（reference internals） | `cpp05r_reference_return_cpp` |

## 新增一课

1. 新建目录：

   ```text
   lessons/NN-topic/
   ├── README.md
   ├── images/
   └── code/
       ├── CMakeLists.txt
       └── demo01/
   ```

2. 在 `lessons/NN-topic/code/CMakeLists.txt` 中定义 target：

   ```cmake
   cpp_add_demo(cppNNx_demo01 demo01/main.cpp)
   add_test(NAME cppNNx_demo01 COMMAND cppNNx_demo01)
   ```

3. 在顶层 `CMakeLists.txt` 中追加：

   ```cmake
   add_subdirectory(lessons/NN-topic/code)
   ```

4. 在 CLion 中执行 **Reload CMake Project**。

## 素材说明

- `images/slide-XX.png`：课程课件原图，按页码命名。
- `images/shot-XX-*.png`：实机编译/运行截图，按主题命名。
- `code/demoNN/`：按知识点存放可运行的 `.c` / `.cpp`，便于并排对比。
- 第 2、3 课由课程测试代码摘取改写；第 1 课是仓库补充示例。

示例中的“❌”注释表示该写法在当前语言中无法通过编译，保留在源码中是为了对照错误信息；实际参与构建的是注释外的合法代码。
