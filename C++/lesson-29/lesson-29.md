# 类中的函数重载
## 函数重载回顾
- 函数重载的<font color=red>本质为相互独立的不同函数</font>
- C++中通过<font color=MediumTurquoise>函数名</font>和<font color=green>函数参数</font>确定函数的调用
- <font color=DeepPink>无法</font>直接通过<font color=MediumTurquoise>函数名</font>得到重载函数的<font color=green>入口地址</font>
- 函数重载<font color=Fuchsia>必然发生在同一个作用域中</font>
  
## 类中的重载
- 类中的成员函数可以进行<font color=deeppink>重载</font>
  - <font color=red>构造函数的重载</font>
  - <font color=blue>普通成员函数的重载</font>
  - <font color=Fuchsia>静态成员函数的重载</font>
  
## 万变不离其宗
1. 重载函数的<font color=Fuchsia>本质为多个不同的函数</font>
2. 函数名和参数列表是唯一的标识
3. 函数重载<font color=red>必须发生在同一个作用域中</font>
   
## 深度的意义
- 重载的意义
  - 通过<font color=blue>函数名</font>对函数<font color=purple>功能进行提示</font>
  - 通过<font color=red>参数列表</font>对函数<font color=Fuchsia>用法进行提示</font>
  - <font color=MediumTurquoise>扩展</font>系统中<font color=Fuchsia>已经存在</font>的函数功能
  
## 小结
- 类的<font color=blue>成员函数</font>之间可以进行<font color=blue>重载</font>
- 重载必须<font color=red>发生在同一个作用域中</font>
- <font color=Fuchsia>全局函数</font>和成员函数<font color=red>不能</font>构成重载关系
- 重载的意义在于<font color=deeppink>扩展已经存在的功能</font>