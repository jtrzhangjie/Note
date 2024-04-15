# 函数对象分析
## 客户需求
- 编写一个函数
  - 函数可以获得斐波那契数列每项的值
  - <font color=deeppink>每调用一次返回一个值</font>
  - <font color=blue>函数可根据需要重复使用</font>
  
  ![Alt text](image.png)

## 存在的问题
- 函数一旦开始调用就<font color=deeppink>无法重来</font>
  - 静态局部变量处于函数内部，<font color=red>外界无法改变</font>
  - 函数为全局函数，是唯一的，<font color=Fuchsia>无法多次独立使用</font>
  - <font color=purple>无法指定某个具体的数列项作为初始值</font>
  
## 解决方案
- 函数对象
  - <font color=deeppink>使用具体的类对象取代函数</font>
  - 该类的对象<font color=blue>具备函数调用的行为</font>
  - <font color=red>构造函数</font>指定具体<font color=purple>数列项的起始位置</font>
  - 多个对象相互独立的求解数列项
  
## 函数对象
- 函数调用操作符(<font color=Fuchsia>()</font>)
  - 只能通过类的<font color=blue>成员函数重载</font>
  - 可以定义不同参数的<font color=red>多个重载函数</font>
  
## 小结
- 函数调用操作符(<font color=Fuchsia>()</font>)是可重载的
- 函数调用操作符只能通过类的<font color=blue>成员函数重载</font>
- 函数调用操作符可以定义不同参数的<font color=red>多个重载函数</font>
- 函数对象用于在工程中<font color=deeppink>取代函数指针</font>