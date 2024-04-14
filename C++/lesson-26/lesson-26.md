# 类的静态成员函数
## 静态成员函数
- 在C++中可以定义静态成员函数
  - 静态成员函数是类中<font color=blue>特殊的成员函数</font>
  - 静态成员函数<font color=Fuchsia>属于整个类所有</font>
  - 可以<font color=green>通过类名直接访问</font>公有静态成员函数
  - 可以<font color=MediumTurquoise>通过对象名访问</font>公有静态成员函数
- 静态成员函数的定义
  - 直接通过<font color=blue>static</font>关键字修饰成员函数
  
  ![Alt text](image.png)

- <font color=blue>静态成员函数</font> vs <font color=red>普通成员函数</font>
  
  ![Alt text](image-1.png)

## 小结
- 静态成员函数是类中<font color=Fuchsia>特殊的成员函数</font>
- 静态成员函数<font color=deeppink>没有</font>隐藏的<font color=blue>this</font>参数
- 静态成员函数<font color=red>可以通过类名直接访问</font>
- 静态成员函数<font color=Fuchsia>只能直接访问静态成员变量(函数)</font>