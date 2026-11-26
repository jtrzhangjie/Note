# 第 05 课：引用的本质分析

- 课程：狄泰软件《C++ 深度解析》第 5 课
- 课件：[第 01–13 页](images/)；示例：[code/](code/)
- 对照基准：**C11** 和 **C++17**。只有合法、可安全运行的整理版进入 CMake；错误片段用于解释诊断和生命周期，不作为可执行示例。

## 1. 交换两个整数：C 指针与 C++ 引用

参考：[引用的意义](images/slide-02.png)。

| 语言 | 形参 | 调用 | 如何修改实参 |
|---|---|---|---|
| C11 | `int *a, int *b` | `swap(&a, &b)` | 地址按值传入；`*a` 和 `*b` 访问原变量 |
| C++17 | `int &a, int &b` | `swap(a, b)` | 引用形参在调用时绑定；直接给形参赋值就修改原变量 |

两版从 `a = 1, b = 2` 得到 `a = 2, b = 1`。引用适合表达「必须传入一个对象」，但不会延长已有实参的生命周期；需要表达「可缺省」或在以后换绑时，指针仍有用途。

## 2. `const` 引用：不能通过它写，不等于对象一定是常量

参考：[绑定已有变量](images/slide-03.png)、[绑定字面量](images/slide-04.png)。

```cpp
int a = 4;
const int& view = a;
a = 5;           // 合法：a 本来就是可修改对象，读取 view 也会得到 5
// view = 5;    // 编译错误：不能通过这个只读引用写入
```

- 若底层对象本来是可写的 `a`，原实验通过去除 `const` 的指针写入实际修改的是 `a`，这一点与直接改 `a` 相同；正常代码直接使用可写的名字，不用强转绕过接口的只读约束。
- `const int& literal = 1;` 直接绑定一个临时对象。在这个局部声明中，临时对象的生命周期延长到引用所在作用域结束。
- **不要运行** `const_cast<int&>(literal) = 5;`。按 [CWG 2657](https://cplusplus.github.io/CWG/issues/2657.html) 澄清的规则，这里的临时对象带有 `const`；转换即使通过编译，写入真正的 `const` 对象仍是未定义行为。不能用一次运行的值推断它合法。整理版只读取该临时对象。

## 3. `sizeof`：引用目标的大小，不等于引用成员的存储开销

参考：[引用成员的大小问题](images/slide-06.png)、[课件中的指针类比](images/slide-08.png)。

| 表达式 | 测量的是什么 |
|---|---|
| `sizeof(char&)`、`sizeof(alias)`、`sizeof(sample.value)` | 被引用的 `char` 类型的大小，结果为 `1`（单位是 C++ 的字节） |
| `sizeof(ReferenceMember)` | 含一个 `char&` 成员的结构体整体大小 |
| `sizeof(ReferenceLayout)` | 含两个 `char*` 和一个 `char&` 成员的结构体整体大小；取决于实现的布局和对齐 |

编译器可以用地址保存引用绑定，也可能不需要独立存储。课件里把引用类比成 `T* const`，有助于理解「绑定不变」，但 **C++ 不规定引用必须是指针对象，也不保证其存储或布局大小**。对引用取地址得到的是被引用对象的地址，不是某个隐藏指针的地址。

原代码用 `%ld` 打印 `sizeof`，实参却是 `size_t`。MinGW 上对此有格式警告；即使某个工具链没有报警，也不要把输出当作可移植结果。整理版统一使用 `%zu`。

## 4. 返回引用：先看对象能活多久

参考：[函数返回引用](images/slide-11.png)。

| 写法 | 结果 |
|---|---|
| `int local_value()` 返回自动局部变量的值 | 合法；调用方拿到值，修改它不会改变下一次调用 |
| `int& shared_value()` 返回 `static int` | 在这个例子中合法；静态局部对象在函数返回后仍存在，调用方通过引用写入会影响下一次读取 |
| `int& bad_return()` 返回自动局部变量的引用 | 出函数后对象已销毁，调用方拿到悬空引用；读写该对象是未定义行为 |

返回自动局部变量的引用不一定直接编译失败。G++ 可给出 `-Wreturn-local-addr` 警告；下文用 `-Werror=return-local-addr` 将该警告提升为错误。`const` 引用也不能延长这个局部变量的寿命。

### 只复现编译诊断，不运行错误程序

**通过只读引用赋值：** 本来就是编译错误。

```bash
g++ -std=c++17 -x c++ -fsyntax-only - <<'CPP'
int main()
{
    int a = 4;
    const int& view = a;
    view = 5;
}
CPP
```

**返回自动局部变量的引用：** 将 G++ 的对应警告提升为错误。

```bash
g++ -std=c++17 -Werror=return-local-addr -x c++ -fsyntax-only - <<'CPP'
int& bad_return()
{
    int local = 0;
    return local;
}
CPP
```

两条命令都只检查源码，不生成可执行文件。编译期拒绝与运行期未定义行为是两回事，不能用「编译通过」判断程序一定正确。

## 可运行示例

| 示例 | 源码 | 观察点 |
|---|---|---|
| 01 交换 | [swap.c](code/demo01/swap.c) / [swap.cpp](code/demo01/swap.cpp) | 指针和引用都能交换原变量 |
| 02 `const` 引用 | [const_reference.cpp](code/demo02/const_reference.cpp) | 改 `a` 后只读引用看到同样的新值；另读取绑定字面量的引用 |
| 03 引用类型和引用成员 | [reference_size.cpp](code/demo03/reference_size.cpp) | 区分 `sizeof(char&)` 与结构体整体大小 |
| 04 结构体布局 | [reference_layout.cpp](code/demo04/reference_layout.cpp) | 对比两个指针成员的大小、引用所指对象和整体大小 |
| 05 返回值与返回引用 | [reference_return.cpp](code/demo05/reference_return.cpp) | 局部值的副本改为 `10` 后下一次仍返回 `0`；修改静态对象后下一次读取 `11` |

在仓库的 `cpp/` 目录运行（Ubuntu / Linux）：

```bash
cmake --preset debug
cmake --build --preset debug
ctest --preset debug -R '^cpp05r_' --output-on-failure
./build/debug/bin/cpp05r_swap_c
./build/debug/bin/cpp05r_swap_cpp
./build/debug/bin/cpp05r_const_reference_cpp
./build/debug/bin/cpp05r_reference_size_cpp
./build/debug/bin/cpp05r_reference_layout_cpp
./build/debug/bin/cpp05r_reference_return_cpp
```

## 验证记录

- 2026-11-27，Ubuntu 22.04.5 虚拟机，GCC/G++ 11.4.0、CMake 3.22.1、Ninja 1.10.1，使用 `debug` 预设。CTest 本课 **6/6**、全量 **32/32** 通过。
- 逐个运行了本课示例。在该环境中，`sizeof(char&)` 为 `1`，`sizeof(ReferenceMember)` 为 `8`，`sizeof(ReferenceLayout)` 为 `24`；两个指针成员各为 `8` 字节，`same referent = 1`。结构体和指针大小是本次实测值，不是 C++ 的布局保证。
- 笔记中的两条 `-fsyntax-only` 命令按预期报错：赋值给只读引用，以及返回自动局部变量的引用（警告升为错误）。没有执行可能触发未定义行为的负例。
