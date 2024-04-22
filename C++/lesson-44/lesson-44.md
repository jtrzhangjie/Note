# 继承中的访问级别
## 继承中的访问级别
- 面向对象中的访问级别不只是<font color=blue>public</font>和<font color=blue>private</font>
- 可以定义<font color=Fuchsia>protected</font>访问级别
- 关键字<font color=Fuchsia>protected</font>的意义
  - 修饰的成员<font color=red>不能被外界直接访问</font>
  - 修饰的成员<font color=purple>可以被子类直接访问</font>
  
## 定义类时访问级别的选择

![Alt text](image.png)

## 小结
- 面向对象中的访问级别不只是<font color=blue>public</font>和<font color=blue>private</font>
- <font color=Fuchsia>protected</font>修饰的成员不能被外界所访问
- <font color=Fuchsia>protected</font>使得<font color=red>子类能够访问父类的成员</font>
- <font color=Fuchsia>protected</font>关键字是<font color=deeppink>为了继承而专门设计的</font>
- 没有<font color=Fuchsia>protected</font>就无法完成真正意义上的<font color=red>代码复用</font>