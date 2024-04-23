# 多态的概念和意义
## 函数重写回顾
- 父类中被重写的函数<font color=blue>依然会继承</font>给子类
- 子类中重写的函数将<font color=blue>覆盖父类中的函数</font>
- 通过<font color=deeppink>作用域分辨符</font>(<font color=deeppink>::</font>)访问父类中的同名成员
  
  ![Alt text](image.png)

## 多态的概念和意义
- 面向对象中期望的行为
  - <font color=blue>根据实际的对象类型判断如何调用重写函数</font>
  - 父类指针(引用)指向
    - 父类对象则调用父类中定义的函数
    - <font color=red>子类对象则调用子类中定义的重写函数</font>
- 面向对象中的多态的概念
  - 根据实际的<font color=deeppink>对象类型决定函数调用</font>的具体目标
  - 同样的<font color=blue>调用语句</font>在实际运行时有<font color=red>多种不同的表现形态</font>
  
  ![Alt text](image-1.png)

- C++语言直接支持多态的概念
  - 通过使用<font color=blue>virtual</font>关键字对<font color=deeppink>多态</font>进行支持
  - 被<font color=blue>virtual</font>声明的函数<font color=fuchsia>被重写后具有多态特性</font>
  - 被<font color=blue>virtual</font>声明的函数叫做<font color=red>虚函数</font>
- 多态的意义
  - 在程序<font color=blue>运行过程中</font>展现出<font color=red>动态的特性</font>
  - <font color=fuchsia>函数重写必须多态实现</font>，否则没有意义
  - 多态是<font color=green>面向对象组件化程序设计</font>的基础特性
- 理论中的概念
  - <font color=red>静态联编</font>
    - 在程序的编译期间就能确定具体的函数调用
      - [X] 如：函数重载
  - <font color=blue>动态联编</font>
    - 在程序<font color=deeppink>实际运行后才能确定具体的函数调用</font>
      - [x] 如：函数重写

## 小结
- <font color=purple>函数重写</font>只可能发生在<font color=fuchsia>父类</font>与<font color=green>子类</font>之间
- 根据<font color=deeppink>实际对象的类型</font>确定调用的具体函数
- <font color=blue>virtual</font>关键字是C++中<font color=blue>支持多态的唯一方式</font>
- 被重写的虚函数可表现出多态的特性