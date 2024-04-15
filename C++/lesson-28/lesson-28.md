# 友元的尴尬能力
## 友元的概念
- 什么是<font color=blue>友元</font>？
  - 友元是C++中的<font color=red>一种关系</font>
  - 友元关系发生在<font color=Fuchsia>函数与类之间</font>或者<font color=purple>类与类之间</font>
  - 友元关系是<font color=green>单项的</font>，<font color=red>不能传递</font>

## 友元的用法
- 在类中以<font color=blue>friend</font>关键字声明友元
- 类的友元可以是<font color=Fuchsia>其他类或者具体函数</font>
- 友元<font color=red>不是</font>类的一部分
- 友元<font color=Fuchsia>不受</font>类中访问级别的限制
- <font color=purple>友元可以直接访问具体类的所有成员</font>
  
## 友元的语法
- 在类中用<font color=blue>friend</font>关键字对<font color=purple>函数</font>或<font color=red>类</font>进行声明
  
  ![Alt text](image.png)

## 友元的尴尬
- 友元是为了<font color=blue>兼顾C语言的高效</font>而诞生的
- 友元<font color=red>直接破坏了</font>面向对象的封装性
- 友元在实际产品中的<font color=red>高效是得不偿失的</font>
- 友元在现代软件工程中<font color=purple>已经逐渐被遗弃</font>
  
## 注意事项
- 友元关系<font color=red>不具备传递性</font>
- 类的友元可以是<font color=blue>其他类的成员函数</font>
- 类的友元可以是<font color=Fuchsia>某个完整的类</font>
  - <font color=purple>所有的成员函数都是友元</font>
  
  ![Alt text](image-1.png)

## 小结
- 友元是为了<font color=blue>兼顾C语言的高效</font>而诞生的
- 友元<font color=red>直接破坏了</font>面向对象的封装性
- 友元关系<font color=red>不具备传递性</font>
- 类的友元可以是其他类的成员函数
- 类的友元可以是<font color=Fuchsia>某个完整的类</font>