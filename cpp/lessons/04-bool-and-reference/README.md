# 第 04 课：布尔类型和引用

- 课程：狄泰软件《C++ 深度解析》第 4 课
- 课件：[第 01–14 页](images/)；原始实验：[code/original/](code/original/)
- 对照基准：项目的 **C11** 与 **C++17**。以下结论区分语言规则、具体编译器的诊断和本机观察值。

## 原始实验：同一份源码，用两种语言模式检查

`_c.txt` / `_cpp.txt` 是桌面原文件的命名，不是编译器自动识别的后缀。对 `.txt` 使用 `-x c` / `-x c++` 显式指定语言，不改文件内容。

| 原始源码 | C11（`gcc`） | C++17（`g++`） |
|---|---|---|
| [test1_cpp.txt](code/original/test1_cpp.txt) | 缺少 `<stdbool.h>`，不认识 `bool` | 通过；三次输出为 `0`、`1`、`1` |
| [test2_cpp.txt](code/original/test2_cpp.txt) | 缺少 `<stdbool.h>`，不认识 `bool` 和 `false` | 通过检查，但 `%d` 打印 `sizeof(b)` 有格式警告；用修正后的 demo 观察输出 |
| [test3_c.txt](code/original/test3_c.txt) / [test3_cpp.txt](code/original/test3_cpp.txt) | 赋值左侧不是左值，编译失败 | 通过，输出 `a = 3, b = 2` |

两份 `test3` **逐字节相同**。这里不是两份代码写法有差异，而是两个语言标准对同一个表达式的规定不同。`test1`、`test2` 的桌面素材只有 `_cpp.txt`；表中 C 列也是对**同一原文**的检查，不是另有原始 C 文件。

在仓库的 `cpp/` 目录运行：

```bash
cd lessons/04-bool-and-reference
cmp code/original/test3_c.txt code/original/test3_cpp.txt

for source in test1_cpp.txt test2_cpp.txt test3_c.txt; do
  gcc -std=c11 -Wall -Wextra -Wpedantic -pedantic-errors \
    -x c -fsyntax-only "code/original/$source"
done

for source in test1_cpp.txt test2_cpp.txt test3_cpp.txt; do
  g++ -std=c++17 -Wall -Wextra -Wpedantic -pedantic-errors \
    -x c++ -fsyntax-only "code/original/$source"
done
```

三个 C 检查报错是预期结果；GCC 对 `test3` 的诊断为 `lvalue required as left operand of assignment`。上面的命令只检查语法和类型，不运行程序。

要直接运行未经改写的 `test3`，在同一目录执行：

```bash
scratch=$(mktemp -d)
g++ -std=c++17 -x c++ code/original/test3_cpp.txt -o "$scratch/test3"
"$scratch/test3"  # a = 3, b = 2
```

## 1. 布尔类型与整型的转换

参考：[布尔类型的值](images/slide-03.png)、[编程实验：布尔类型的使用](images/slide-04.png)。

- C++17 的 `bool`、`true`、`false` 不用包含头文件。C11 的内建类型是 `_Bool`，`<stdbool.h>` 为 C 版提供 `bool`、`true` 和 `false`。这不是说 C 没有布尔类型。
- 整数转布尔时，`0` 转成假，非零（包含负数）转成真；布尔转成 `int` 时，假为 `0`、真为 `1`。
- 布尔值参与这里的 `+` / `-` 运算时先提升为 `int`，结果赋回布尔变量时再归一化。`b` 初始为 `0`，`b = b + 1` 得到真；接着 `b = b - 3` 的右侧是 `1 - 3 = -2`，赋回去仍为真。两种语言的整理版都打印 `0`、`1`、`1`。课件里的 `b++` 在 C++17 已不合法；本课沿用原始 `test1_cpp.txt` 的 `b = b + 1`。

`test2` 的整理版用 `%zu` 打印 `sizeof(b)`（结果类型为 `size_t`）。布尔变量本身传给 `printf` 会提升为 `int`，所以打印布尔值的 `%d` 不变。两种语言中 `b, a` 依次为 `0, 0`、`1, 1`、`1, 1`、`1, 10`、`0, 0`。当执行 `b = a` 且 `a = 10` 时，只转换并写入 `b`，`a` 仍为 `10`。`sizeof(b)` 是具体实现的字节数，不能把课件或本机的 `1` 当成标准保证。

## 2. 条件表达式：选的是值，还是可赋值的对象？

参考：[条件运算符的对比](images/slide-07.png)、[条件运算符与引用](images/slide-12.png)。

```cpp
int a = 1;
int b = 2;
(a < b ? a : b) = 3;
```

- **C++17**：本例的两个分支都是 `int` 左值，结果也是左值，指代被选中的变量。条件为真，赋值改的是 `a`。如果改成 `(a < b ? 1 : b) = 3`，本例的条件表达式结果不再是左值，即使运行时会选 `b` 也不能赋值。左值还必须可修改，才可放在赋值左侧。
- **C11**：条件表达式本身不产生左值。可以改成 `*(a < b ? &a : &b) = 3;`：先选地址，再解引用得到可赋值的 `int` 左值。这个替代写法不改变原始实验的编译结论。

## 3. 引用是别名，C 用指针表达间接访问

参考：[C++ 中的引用](images/slide-10.png)。

```cpp
int a = 4;
int& alias = a;
alias = 5;  // 修改 a，并不是让 alias 改绑到另一个对象
```

这里的 `int&` 是左值引用，定义时绑定到 `a`。C11 没有 C++ 这样的引用声明，可用 `int *alias = &a; *alias = 5;` 修改同一个对象；指针自身可重新赋予地址，和引用的绑定不同。由于桌面目录没有单独的引用实验源码，本仓库依据课件补充了这组对照。

## 可运行示例

| 示例 | C | C++ | 与原稿的关系 |
|---|---|---|---|
| 01 布尔运算 | [bool_arithmetic.c](code/demo01/bool_arithmetic.c) | [bool_arithmetic.cpp](code/demo01/bool_arithmetic.cpp) | 沿用 `test1` 的运算，C 版加 `<stdbool.h>` |
| 02 布尔和整型转换 | [bool_conversion.c](code/demo02/bool_conversion.c) | [bool_conversion.cpp](code/demo02/bool_conversion.cpp) | 沿用 `test2` 的转换，两版将 `%d` 修正为 `%zu`（只改 `sizeof` 一行），C 版加 `<stdbool.h>` |
| 03 条件运算符 | [conditional_pointer.c](code/demo03/conditional_pointer.c) | [conditional_lvalue.cpp](code/demo03/conditional_lvalue.cpp) | C 改用指针；C++ 保留 `test3` 的赋值写法 |
| 04 引用与指针 | [reference_alias.c](code/demo04/reference_alias.c) | [reference_alias.cpp](code/demo04/reference_alias.cpp) | 本仓库按课件补充，两版都将 `a` 改为 `5` |

在仓库的 `cpp/` 目录运行（Linux / Ubuntu 虚拟机）：

```bash
cmake --preset debug
cmake --build --preset debug
ctest --preset debug -R '^cpp04b_' --output-on-failure
./build/debug/bin/cpp04b_bool_arithmetic_c
./build/debug/bin/cpp04b_bool_arithmetic_cpp
./build/debug/bin/cpp04b_conditional_pointer_c
./build/debug/bin/cpp04b_conditional_lvalue_cpp
```

CTest 运行的是整理后的示例。原始 `.txt` 独立保留，因此 C 中预期的编译失败不会影响默认构建。

## 验证记录

- 2026-11-25，Ubuntu 22.04.5 虚拟机，GCC / G++ 11.4.0、CMake 3.22.1、Ninja 1.10.1，使用 `debug` 预设。
- 运行 `ctest --preset debug --output-on-failure`：本课 8/8，通过全部课程的 26/26。另直接运行并逐对比较了本课示例的输出，C 与 C++ 整理版在这四组实验中输出一致。
- 原始 `.txt` 的编译诊断与上表一致，直接编译运行了未改写的 C++ `test1` 和 `test3`；`test2` 原稿只检查编译诊断，运行结果取自修正后的示例。两种布尔类型在该环境中 `sizeof` 实测均为 `1`。
