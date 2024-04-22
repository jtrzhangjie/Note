# 同名覆盖引发的问题
## 父子间的赋值兼容
- 子类对象可以当做父类对象使用(<font color=deeppink>兼容性</font>)
  - 子类对象可以<font color=green>直接赋值</font>给父类对象(<font color=>兼容性</font>)
  - 子类对象可以直接初始化父类对象
  - <font color=blue>父类指针</font>可以<font color=fuchsia>直接指向</font>子类对象
  - <font color=red>父类引用</font>可以<font color=purple>直接引用</font>子类对象
- 当使用父类指针(引用)指向子类对象时
  - 子类对象<font color=red>退化为父类对象</font>
  - <font color=blue>只能访问</font>父类中定义的成员
  - 可以<font color=fuchsia>直接访问</font>被子类<font color=purple>覆盖</font>的同名成员
  
## 特殊的同名函数
- 子类中可以<font color=blue>重定义</font>父类中<font color=fuchsia>已经存在的成员函数</font>
- 这种重定义<font color=red>发生在继承中</font>，叫做<font color=purple>函数重写</font>
- <font color=green>static_case</font>是同名覆盖的一种特殊情况
  
  ![Alt text](image.png)

- 问题分析：函数重写遇上赋值兼容会发生什么？
  - <font color=blue>编译期间</font>，编译器<font color=red>只能根据指针的类型判断</font>所指向的对象
  - 根据赋值兼容，<font color=purple>编译器认为父类指针指向的是父类对象</font>
  - 因此，编译结果只可能是<font color=fuchsia>调用父类中定义的同名函数</font>
  
  ![Alt text](image-1.png)

## 小结
- 子类对象可以当做父类对象使用(<font color=deeppink>赋值兼容</font>)  
- 父类指针可以<font color=red>正确的指向子类对象</font>
- 父类引用可以<font color=purple>正确的代表子类对象</font>
- 子类中可以<font color=blue>重写</font>父类中的<font color=fuchsia>成员函数</font>