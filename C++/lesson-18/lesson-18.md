# 对象的构造(中)
## 构造函数
- <font color=deeppink>带有参数</font>的构造函数
  - 构造函数可以根据<font color=Fuchsia>需要定义参数</font>
  - 一个类中可以存在<font color=red>多个重载的构造函数</font>
  - 构造函数的重载遵循C++重载的规则
  
  ![Alt text](image.png)

- <font color=deeppink>友情提醒</font>
  - <font color=purple>对象定义</font>和<font color=Fuchsia>对象声明</font>不同
    - 对象定义 - <font color=MediumTurquoise>申请对象空间并调用构造函数</font>
    - 对象声明 - 告诉编译器存在这样一个对象
  
    ![Alt text](image-1.png)

- 构造函数的自动调用
  
  ![Alt text](image-2.png)

- 构造函数的调用
  - 一般情况下，构造函数在<font color=purple>对象定义时被自动调用</font>
  - 一些特殊情况下，<font color=deeppink>需要手工调用构造函数</font>
  
## 小结
- 构造函数可以<font color=Fuchsia>根据需要定义参数</font>
- <font color=red>构造函数</font>之间可以存在<font color=blue>重载关系</font>
- 构造函数遵循C++中重载函数的规则
- <font color=green>对象定义时会触发构造函数的调用</font>
- 在一些情况下可以<font color=deeppink>手动调用构造函数</font>