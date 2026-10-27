# C++ 课程

## 进度

| 课 | 主题 | 笔记 | 代码 | 状态 |
|---|---|---|---|---|
| 01 | C/C++ 入门与构建 | [笔记](lessons/01-basics/README.md) | [CMake](lessons/01-basics/code/CMakeLists.txt) | ✅ |
| 02 | 函数、多文件与 vector | [笔记](lessons/02-functions/README.md) | [CMake](lessons/02-functions/code/CMakeLists.txt) | ✅ |

## 构建方式

在 CLion/Gateway 中打开课程目录：

```text
/home/joyce/work/note/cpp
```

终端构建：

```bash
cd ~/work/note/cpp
cmake --preset debug
cmake --build --preset debug
ctest --preset debug --output-on-failure
```

只构建一个 demo：

```bash
cmake --build --preset debug --target cpp01_demo01
./build/debug/bin/cpp01_demo01
```

## 命名规则

- 课目录：`lessons/NN-topic/`
- 笔记：`lessons/NN-topic/README.md`
- 截图：`lessons/NN-topic/images/`
- 代码：`lessons/NN-topic/code/`
- CMake target：`cppNN_demoNN`，例如 `cpp05_demo02`

## 新增一课

1. 创建目录：

   ```text
   lessons/05-functions/
   ├── README.md
   ├── images/
   └── code/
       └── CMakeLists.txt
   ```

2. 在 `cpp/CMakeLists.txt` 增加：

   ```cmake
   add_subdirectory(lessons/05-functions/code)
   ```

3. 在这一课的 `code/CMakeLists.txt` 中定义 target：

   ```cmake
   cpp_add_demo(cpp05_demo01 demo01/main.cpp)
   cpp_add_demo(cpp05_demo02 demo02/main.cpp)
   ```

4. 在 CLion 中执行 **Reload CMake Project**。
