# 第 01 课：C/C++ 入门与构建

- 日期：2026-10-28
- 代码目录：`code/`
- 截图目录：`images/`

## 本课目标

- 用 CMake + Ninja 编译第一个 C++ 程序。
- 认识 `main()`、`std::cout`、变量和算术运算。
- 对比 C 与 C++ 的最小程序。
- 在 CLion 中运行和断点调试。

## Demo

| Demo | 文件 | 说明 |
|---|---|---|
| demo01 | [main.cpp](code/demo01/main.cpp) | C++ Hello World |
| demo02 | [main.cpp](code/demo02/main.cpp) | 变量、加法、断点观察 |
| demo03 | [main.c](code/demo03/main.c) | C Hello World |

## 知识点

### C++ 程序结构

```cpp
#include <iostream>

int main()
{
    std::cout << "Hello" << '\n';
    return 0;
}
```

- `#include <iostream>` 引入输入输出流库。
- `main()` 是程序入口，返回 `int`。
- `return 0` 表示程序正常结束。
- `'\n'` 是换行字符，比 `std::endl` 更轻量。

### 变量与算术

```cpp
int a = 10;
int b = 20;
int sum = a + b;
```

- `int` 是整数类型。
- `+` 是算术运算符。
- 可以在 CLion 的断点处观察 `a`、`b`、`sum` 的值。

### C 与 C++ 的输出

C 版本：

```c
#include <stdio.h>

int main(void)
{
    printf("Hello from C!\n");
    return 0;
}
```

C++ 版本使用 `iostream` 和 `std::cout`，C 版本使用 `stdio.h` 和 `printf`。

## 构建与运行

```bash
cd ~/work/note/cpp
cmake --preset debug
cmake --build --preset debug --target cpp01_demo01
./build/debug/bin/cpp01_demo01
```

一次构建全部 demo 并运行测试：

```bash
cmake --build --preset debug
ctest --preset debug --output-on-failure
```

在 CLion 中打开 `cpp/`，在 target 下拉框选择 `cpp01_demo01`，然后 Run/Debug。

## 截图

<!-- 把截图放到 images/，例如：
![CLion 运行 demo01](images/01-clion-run.png)
-->

## 踩坑与总结

- 打开课程根目录 `cpp/`，不要单独打开 demo 目录。
- CMake target 名是 `cpp01_demo01`，不是文件夹名。
- 修改 `CMakeLists.txt` 后要让 CLion 重新加载 CMake 项目。
- 构建产物在 `cpp/build/debug/bin/`，不要提交到 Git。

## 练习

1. 修改 demo01 的输出内容，重新编译运行。
2. 在 demo02 中增加乘法和除法，观察结果。
3. 用 C 写一个输出自己名字的程序。
