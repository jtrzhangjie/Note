# 经典问题解析二
## 关于析构的疑问
- 当程序中存在<font color=blue>多个对象</font>的时候，如何确定这些对象的<font color=red>析构顺序？</font>
- <font color=blue>单个对象</font>创建时构造函数的调用顺序
  - 1.调用父类的构造过程
  - 2.调用<font color=orange>成员变量的构造函数</font>(调用顺序于声明顺序相同)
  - 调用类自身的构造函数
    <font color=Fuchsia>析构函数</font>与<font color=purple>对应的构造函数</font>的<font color=deeppink>调用顺序相反</font>
- <font color=blue>多个对象</font>析构时
  - <font color=Fuchsia>析构顺序</font>与<font color=purple>构造顺序</font>相反
  
## 关于析构的答案
对于栈对象和全局对象，类似于入栈与出栈的顺序，<font color=deeppink>最后构造的对象被最先析构！！</font>
<font color=blue>堆对象</font>的析构发生在使用<font color=blue>delete</font>的时候，<font color=purple>与delete的使用顺序相关</font>

## 关于const对象的疑问
- <font color=blue>const</font>关键字<font color=Fuchsia>能够</font>修饰对象
- <font color=blue>const</font>修饰的对象为<font color=purple>只读对象</font>
- 只读对象的<font color=red>成员变量不允许被改变</font>
- 只读对象是编译阶段的概念，<font color=deeppink>运行时无效</font>
- C++中的<font color=Fuchsia>const成员函数</font>
  - <font color=blue>const</font>对象<font color=brown>只能调用const的成员函数</font>
  - <font color=blue>const</font>成员函数中<font color=Fuchsia>只能调用const成员函数</font>
  - <font color=blue>const</font>成员函数中<font color=deeppink>不能直接改写成员变量的值</font>
- <font color=blue>const</font>成员函数的定义
  
  ![Alt text](image.png)

## 关于类成员的疑问
- 从<font color=blue>面相对象</font>的角度
  - 对象由<font color=Fuchsia>属性(成员变量)</font>和<font color=green>方法(成员函数)</font>构成
- 从<font color=red>程序运行的角度</font>
  - 对象由<font color=blue>数据</font>和<font color=blue>函数</font>构成
    - 数据可以位于<font color=MediumTurquoise>栈</font>、<font color=MediumTurquoise>堆</font>和<font color=MediumTurquoise>全局数据区</font>
    - 函数只能位于<font color=purple>代码段</font>
- 结论
  - 每一个<font color=green>对象拥有自己独立的属性</font>(成员变量)
  - 所有的<font color=red>对象共享类的方法</font>(成员函数)
  - <font color=Fuchsia>方法能够直接访问对象的属性</font>
  - 方法中的<font color=deeppink>隐藏参数</font><font color=blue>this</font>用于指代<font color=purple>当前对象</font>