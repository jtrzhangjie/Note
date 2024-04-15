# 操作符重载的概念
## 操作符重载
- C++中的<font color=blue>重载</font>能够<font color=red>扩展操作符的功能</font>
- 操作符的重载<font color=Fuchsia>以函数的方式进行</font>
- 本质：
  - 用<font color=deeppink>特殊形式的</font>函数扩展操作符的功能
- 通过<font color=blue>operator</font>关键字可以定义<font color=red>特殊的函数</font>
- <font color=blue>operator</font>的本质是<font color=purple>通过函数重载操作符</font>
- 语法：
  
  ![Alt text](image.png)

- 可以将<font color=blue>操作符重载函数</font>定义为类的<font color=blue>成员函数</font>
  - 比全局操作符重载函数少一个参数(<font color=purple>左操作数</font>)
  - <font color=MediumTurquoise>不需要依赖友元</font>就可以完成操作符重载
  - <font color=deeppink>编译器优先在成员函数中寻找操作符重载函数</font>
  
  ![Alt text](image-1.png)

## 小结
- <font color=red>操作符重载</font>是C++的强大特性之一
- 操作符重载的<font color=deeppink>本质</font>是通过函数扩展操作符的功能
- <font color=blue>operator</font>关键字是实现操作符重载的关键
- 操作符重载遵循<font color=Fuchsia>相同的</font>函数重载规则
- <font color=green>全局函数</font>和<font color=MediumTurquoise>成员函数</font>都可以实现对操作符的重载