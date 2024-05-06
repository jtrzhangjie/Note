# 单例类模板
## 单例模式
- 要控制类的对象数目，<font color=blue>必须对外隐藏构造函数</font>
- 思路：
  - 将构造函数的访问熟悉设置为<font color=blue>private</font>
  - 定义instance并初始化为NULL
  - 当需要使用对象时，访问instance的值
    - <font color=fuchsia>空值：创建对象，并用instance标记</font>
    - <font color=red>非空值：返回instance标记的对象</font>
- <font color=deeppink>存在的问题</font>
  - 需要使用单例模式时：
    - 必须定义静态成员变量c_instance
    - 必须定义静态成员函数GetInstance()
- 解决方案
  <font color=blue>将单例模式相关的代码抽取出来</font>，开发单例类模板。当需要单例类时，直接使用单例类模板

## 小结
- 单例模式时开发中<font color=blue>最常用的设计模式之一</font>
- 单例模式的应用使得<font color=red>一个类最多只有一个对象</font>
- 可以将单例模式相关的代码抽象成类模板
- 需要使用单例模式的类直接使用<font color=deeppink>单例类模板</font>