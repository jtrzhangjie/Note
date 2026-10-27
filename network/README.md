# 网络

待开始。

结构约定与 `cpp/` 相同：

```text
network/
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

- [ ] TCP echo 服务端/客户端
- [ ] UDP 收发
- [ ] 多进程/多线程服务器
- [ ] IO 多路复用
- [ ] HTTP 基础
- [ ] 抓包与排错

网络 demo 常常一个 target 生成多个可执行程序，例如 `server` 和 `client`，需要在同一课的 `code/CMakeLists.txt` 中分别定义。
