# C++对象模型分析(下)
## 继承对象模型
- 在C++中编译器的内部<font color=blue>类可以理解为结构体</font>
- 子类是由<font color=blue>父类成员叠加子类新成员</font>得到的
  
  ![Alt text](image.png)

## 多态对象模型
- C++多态的实现原理
  - 当类中<font color=blue>声明虚函数</font>时，编译器会在类中<font color=blue>生成一个虚函数表</font>
  - 虚函数表示一个<font color=red>存储成员函数地址的数据结构</font>
  - 虚函数表是由编译器自动生成与维护的
  - <font color=blue>virtual</font>成员函数会被编译器<font color=pruple>放入虚函数表中</font>
  - <font color=fuchsia>存在虚函数时</font>，每个对象中都有一个指向虚函数表的指针
  
  ![Alt text](image-1.png)

  ![Alt text](image-2.png)

  ![Alt text](image-3.png)

## 小结
- 继承的本质就是<font color=blue>父子间成员变量的叠加</font>
- C++中的多态是<font color=red>通过虚函数表实现的</font>
- 虚函数表是由编译器自动生成与维护的
- 虚函数的调用效率<font color=deeppink>低于</font>普通成员函数