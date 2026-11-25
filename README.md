# 课程学习笔记

Ubuntu 22.04 虚拟机 + JetBrains Gateway/CLion + CMake 的课程笔记与 demo 仓库。

## 课程入口

| 课程 | 入口 | 当前进度 |
|---|---|---|
| C++ | [cpp/README.md](cpp/README.md) | 第 01–04 课 |
| 数据结构 | [data-structures/README.md](data-structures/README.md) | 待开始 |
| Qt | [qt/README.md](qt/README.md) | 待开始 |
| 网络 | [network/README.md](network/README.md) | 待开始 |

## 环境与规范

- [虚拟机与 Gateway 配置](docs/environment.md)
- [Git 工作流](docs/git-workflow.md)
- [笔记模板](docs/templates/lesson.md)

## 目录约定

- 每门课一个顶层目录。
- 每节课一个 `lessons/NN-topic/`。
- 每节课内：`README.md` 笔记、`images/` 截图、`code/` demo。
- 每门课一个 CMake 工程，demo 是 target，不单独打开 demo 目录。
- 截图使用相对路径引用，例如 `![说明](images/01-topic.png)`。
