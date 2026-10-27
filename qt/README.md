# Qt

待开始。

结构约定与 `cpp/` 相同：

```text
qt/
├── README.md
├── CMakeLists.txt
├── CMakePresets.json
└── lessons/
    └── 01-xxx/
        ├── README.md
        ├── images/
        └── code/
```

计划内容：

- [ ] Qt Widgets 窗口
- [ ] 信号与槽
- [ ] 布局与控件
- [ ] 模型/视图
- [ ] 文件与网络
- [ ] 综合小项目

Qt 课程使用 CMake + Qt6。Ubuntu 22.04 默认软件源是 Qt 6.2，若课程要求更高版本，再单独安装 Qt。

注意：JetBrains Gateway 只转发 IDE 界面，不转发 Qt 程序窗口。运行 GUI 程序需要虚拟机桌面或 X11 转发。
