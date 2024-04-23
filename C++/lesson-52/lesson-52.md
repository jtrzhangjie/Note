# C++中的抽象类和接口
## 什么是抽象类？
- 面相对象中的抽象概念
  
  ![Alt text](image.png)

  ![Alt text](image-1.png)

- 面向对象中的<font color=blue>抽象类</font>
  - 可用于表现现实世界中的<font color=deeppink>抽象概念</font>
  - 是一种只能<font color=deeppink>定义类型</font>，而<font color=blue>不能产生对象</font>的类
  - <font color=blue>只能被继承</font>并重写相关函数
  - 直接特征是<font color=deeppink>相关函数没有完整的实现</font>
- <font color=blue>Shape</font>是现实世界中各种<font color=deeppink>图形的抽象概念</font>
- 因此：
  - 程序中必须能够<font color=blue>反映抽象的图形</font>
  - 程序中通过<font color=deeppink>抽象类</font>表示图形的概念
  - 抽象类<font color=blue>不能创建对象</font>，<font color=deeppink>只能用于继承</font>
  
## 抽象类与纯虚函数
- C++语言中<font color=blue>没有抽象类</font>的概念
- C++中<font color=blue>通过纯虚函数实现抽象类</font>
- 纯虚函数是指<font color=blue>只定义原型</font>的成员函数
- 一个C++类中<font color=blue>存在纯虚函数</font>就成为了抽象类
- 纯虚函数的语法规则
  
  ![Alt text](image-2.png)

- 抽象类<font color=blue>只能</font>用作父类<font color=blue>被继承</font>
- 子类必须<font color=deeppink>实现纯虚函数</font>的具体功能
- 纯虚函数被实现后<font color=blue>成为虚函数</font>
- 如果子类<font color=deeppink>没有实现纯虚函数</font>，则<font color=deeppink>子类成为抽象类</font>
- 满足下面条件的C++类则称为<font color=blue>接口</font>
  - 类中<font color=deeppink>没有</font>定义任何的<font color=deeppink>成员变量</font>
  - 所有的<font color=blue>成员函数都是公有的</font>
  - 所有的<font color=deeppink>成员函数都是纯虚函数</font>
  - 接口是一种<font color=blue>特殊的抽象类</font>

## 小结
- <font color=blue>抽象类</font>用于描述现实世界中的<font color=blue>抽象概念</font>
- 抽象类<font color=deeppink>只能被继承</font>不能创建对象
- C++中<font color=blue>没有抽象类</font>的概念
- C++中通过<font color=deeppink>纯虚函数实现抽象类</font>
- 类中<font color=blue>只存在纯虚函数</font>时成为接口
- <font color=deeppink>接口</font>是一种特殊的抽象类