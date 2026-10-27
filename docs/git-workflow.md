# Git 工作流

## 当前远程

当前 `origin` 是虚拟机上的 bare 仓库，作为临时 Git 远程使用：

```text
/home/joyce/git/note.git
```

Windows 侧通过 SSH 访问：

```text
ubuntu:/home/joyce/git/note.git
```

它没有 Web 界面，只提供 Git 传输。以后有正式 Git 服务器时，把 `origin` 换掉即可：

```bash
git remote set-url origin git@你的服务器:你的账号/note.git
git push -u origin main
```

如果希望保留两个远程，也可以：

```bash
git remote add upstream git@你的服务器:你的账号/note.git
git push -u upstream main
```

## 两个工作副本

| 位置 | 用途 |
|---|---|
| 虚拟机 `/home/joyce/work/note` | 写代码、构建、调试 |
| Windows `F:\Note` | 写笔记、放截图 |

两边都可以提交，但建议分工：

- 代码改动在虚拟机提交。
- 笔记和截图在 Windows 提交。
- `cpp/README.md` 的进度表只在一侧维护，避免冲突。

每次开始前：

```bash
git pull --rebase
```

提交前先看状态：

```bash
git status
git add 具体文件
git commit -m "cpp: 01 环境与 Hello World 笔记"
git push
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
- 文件名用英文小写和编号，例如 `01-clion-run.png`。
- Markdown 中用相对路径：

```markdown
![CLion 运行结果](images/01-clion-run.png)
```

- 截图多到仓库明显变大时，再考虑 Git LFS。
- 公开仓库注意遮掉 IP、账号、token 等敏感信息。
