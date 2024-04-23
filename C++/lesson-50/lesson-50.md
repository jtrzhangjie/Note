# C++对象模型分析(上)
## 回归本质
- <font color=blue>class</font>是一种特殊的<font color=blue>struct</font>
  - 在内存中<font color=blue>class</font>依旧可以看做变量的集合
  - <font color=blue>class</font>和<font color=blue>struct</font>遵循相同的内存对齐规则
  - <font color=blue>class</font>中的<font color=red>成员函数</font>与<font color=purple>成员变量</font>是分开存放的
    - 每个对象有<font color=fuchsia>独立的</font>成员变量
    - 所有对象<font color=deeppink>共享</font>类中的成员函数
- 值得思考的问题
  
  ![Alt text](image.png)

## C++对象模型分析
- <font color=blue>运行时</font>的对象<font color=fuchsia>退化为结构体</font>的形式
  - 所有<font color=red>成员变量</font>在内存中<font color=purple>依次排布</font>
  - 成员变量间可能存在内存空隙
  - 可以<font color=MediumTurquoise>通过内存地址</font>直接访问成员变量
  - 访问权限关键字在运行时失效
- 类中的<font color=blue>成员函数</font>位于<font color=red>代码段</font>中
- 调用成员函数时<font color=green>对象地址作为参数隐式传递</font>
- 成员函数<font color=purple>通过对象地址访问成员变量</font>
- C++语法规则隐藏了对象地址的传递过程
  
## 小结
- C++中的类对象<font color=blue>在内存布局上与结构体相同</font>
- <font color=fuchsia>成员变量</font>和<font color=red>成员函数</font>在内存中分开存放
- <font color=green>访问权限</font>关键字在<font color=deeppink>运行时失效</font>
- 调用成员函数时对象地址作为参数隐式传递