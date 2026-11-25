# Git 工作流

## 当前远程

`origin` 是 GitHub 仓库：

```text
https://github.com/jtrzhangjie/Note
```

Windows 侧用 GitHub CLI 的凭据助手认证（SSH 22 端口在当前网络下不通，走 HTTPS）：

```bash
gh auth status
gh auth setup-git
```

仓库里另外保留了一个 `vm` 远程，指向虚拟机的 bare 仓库，只用于局域网内快速同步：

```text
vm  ubuntu:/home/joyce/git/note.git
```

日常推送只推 `origin`：

```bash
git push origin main
```

需要时再补推虚拟机：

```bash
git push vm main
```

## 内容以哪边为准

| 位置 | 角色 |
|---|---|
| Windows `F:\Note` | **唯一源头**：笔记、课件、截图、示例代码都在这里整理和提交 |
| 虚拟机 `/home/joyce/work/note` | 只用来编译、运行、验证，内容从 `origin` 拉取，不再作为代码来源 |

以前虚拟机里的旧 demo（`lessons/01-basics`、`lessons/02-functions`）已经全部废弃，不再随仓库保留。已整理的课程见 [C++ 课程目录](../cpp/README.md#课程目录)。

虚拟机同步：

```bash
cd ~/work/note
git pull
cd cpp
cmake --preset debug
cmake --build --preset debug
ctest --preset debug --output-on-failure
```

## 常用流程

每次开始前：

```bash
git pull --rebase
```

提交前先看状态：

```bash
git status
git add 具体文件
git commit -m "cpp: 03 const 笔记与测试代码"
git push origin main
```

不要习惯性 `git add .`，尤其在有截图和构建目录时。构建目录已经被 `.gitignore` 忽略。

## 提交信息

建议格式：

```text
cpp: 01 环境搭建笔记
cpp: 02 函数 demo 与笔记
ds: 01 动态数组实现
qt: 01 窗口与信号槽
net: 01 TCP echo
docs: 更新 Gateway 配置
```

## 截图

- 每课截图放在 `cpp/lessons/NN-topic/images/`。
- 文件名用英文小写和编号，例如 `slide-01.png`、`shot-01-const-macro-scope.png`。
- Markdown 中用相对路径：

```markdown
![CLion 运行结果](images/shot-01-const-macro-scope.png)
```

- 截图多到仓库明显变大时，再考虑 Git LFS。
- 公开仓库注意遮掉 IP、账号、token 等敏感信息。
