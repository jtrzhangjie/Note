# 被遗弃的多重继承(上)
## C++中的多重继承
- C++支持编写<font color=blue>多重继承</font>的代码
  - 一个子类可以<font color=deeppink>拥有多个父类</font>
  - 子类拥有<font color=blue>所有父类的</font>成员变量
  - 子类继承<font color=deeppink>所有父类的</font>成员函数
  - 子类对象可以<font color=blue>当做任意父类对象</font>使用
- 多重继承的语法规则
  
  ![Alt text](image.png)

## 多重继承的问题一

![Alt text](image-1.png)

## 多重继承的问题二

![Alt text](image-2.png)

![Alt text](image-3.png)

- <font color=blue>虚继承</font>能够<font color=deeppink>解决数据冗余</font>问题
- 中间层父类<font color=blue>不再关心顶层父类的初始化</font>
- 最终子类必须<font color=deeppink>直接调用顶层父类的构造函数</font>
  
## 小结
- C++<font color=blue>支持多重继承的编程方式</font>
- 多重继承<font color=deeppink>容易带来问题</font>
  - 可能出现“<font color=blue>同一个对象的地址不同</font>”的情况
  - 虚继承可以解决<font color=deeppink>数据冗余</font>的问题
  - 虚继承<font color=blue>使得架构设计可能出现问题</font>