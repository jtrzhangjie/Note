# 第 02 课：函数、多文件与 vector

- 日期：2026-10-28
- 代码目录：`code/`
- 截图目录：`images/`

## 本课目标

- 把函数声明和定义拆到不同文件。
- 理解头文件、`#include` 和 include guard。
- 在 CMake 中列出多个源文件。
- 使用 `std::vector` 和范围 `for` 循环。

## Demo

| Demo | 文件 | 说明 |
|---|---|---|
| demo01 | [main.cpp](code/demo01/main.cpp) / [add.cpp](code/demo01/add.cpp) / [add.h](code/demo01/add.h) | 函数跨文件调用 |
| demo02 | [main.cpp](code/demo02/main.cpp) | vector 与循环求和 |

## 知识点

### 函数声明与定义

`add.h` 只放声明：

```cpp
int add(int a, int b);
```

`add.cpp` 放定义：

```cpp
int add(int a, int b)
{
    return a + b;
}
```

`main.cpp` 包含头文件后就可以调用：

```cpp
#include "add.h"
```

### 头文件保护

```cpp
#ifndef LESSON02_DEMO01_ADD_H
#define LESSON02_DEMO01_ADD_H

int add(int a, int b);

#endif
```

作用：同一个头文件被多次包含时，避免重复声明。

### 多文件编译

CMake 中要把所有参与编译的源文件列出来：

```cmake
cpp_add_demo(cpp02_demo01
  demo01/main.cpp
  demo01/add.cpp
  demo01/add.h
)
```

头文件不是必须列出，但写进去 CLion 的项目树和索引会更完整。

### vector 与范围 for

```cpp
std::vector<int> numbers = {1, 2, 3, 4, 5};
int sum = 0;

for (int number : numbers) {
    sum += number;
}
```

- `std::vector` 是动态数组。
- 范围 `for` 会依次取出容器中的元素。
- `sum += number` 等价于 `sum = sum + number`。

## 构建与运行

```bash
cd ~/work/note/cpp
cmake --preset debug
cmake --build --preset debug --target cpp02_demo01
./build/debug/bin/cpp02_demo01
```

运行测试：

```bash
ctest --preset debug --output-on-failure
```

在 CLion 中选择目标：

- `cpp02_demo01`：观察 `add()` 的跨文件调用。
- `cpp02_demo02`：观察 vector 和循环变量 `sum`。

## 截图

<!-- 把截图放到 images/，例如：
![跨文件调用栈](images/01-call-stack.png)
-->

## 踩坑与总结

- 函数声明和定义签名要一致。
- 头文件不要放函数定义，否则多个源文件包含时可能重复定义。
- CMake 里漏写 `.cpp` 文件，链接时会报 `undefined reference`。
- 修改 CMakeLists 后要重新加载项目。

## 练习

1. 增加 `sub()`、`mul()` 函数，放到 `add.cpp` 或新建源文件。
2. 把 `add.h` 改成没有 include guard，观察重复包含时的错误。
3. 用 vector 求最大值、最小值和平均值。
