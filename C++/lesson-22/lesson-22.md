# 对象的销毁
## 对象的销毁
- 生活中的对象都是被初始化后才上市的
- 生活中的对象被<font color=blue>销毁前会做一些清理工作</font>
- <font color=blue>一般而言</font>，<font color=red>需要销毁的对象都应该做清理</font>
- 解决方案
  - 为每个类都提供一个<font color=blue>public</font>的<font color=Fuchsia>free</font>函数
  - 对象不在需要时立即调用<font color=Fuchsia>free</font>函数进行清理
  
  ![Alt text](image.png)

- <font color=deeppink>存在的问题</font>
  - <font color=Fuchsia>free</font>只是一个<font color=red>普通的函数</font>，<font color=blue>必须显示的调用</font>
  - 对象销毁前没有做清理，很可能造成<font color=red>资源泄漏</font>
  
## 析构函数
- C++的类中可以定义一个<font color=deeppink>特殊的清理函数</font>
  - 这个特殊的清理函数叫做<font color=blue>析构函数</font>
  - 析构函数的<font color=red>功能与构造函数相反</font>
- 定义：<font color=Fuchsia>~ClassName</font>
  - 析构函数<font color=green>没有参数</font>也没有返回值类型声明
  - 析构函数在对象销毁时<font color=purple>自动被调用</font>
- 析构函数的<font color=blue>定义准则</font>
  当类中<font color=red>自定义了构造函数</font>，并且构造函数中<font color=purple>使用了系统资源</font>(如：内存申请，文件打开等)，则<font color=Fuchsia>需要自定义析构函数</font>

## 小结
- 析构函数是<font color=Fuchsia>对象销毁时进行清理</font>的特殊函数
- 析构函数在<font color=red>对象销毁时自动被调用</font>
- 析构函数是对象<font color=blue>释放系统资源的保障</font>