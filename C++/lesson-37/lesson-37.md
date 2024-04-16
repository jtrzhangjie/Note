# 智能指针分析
## 永恒的话题
- 内存泄漏(<font color=Fuchsia>臭名昭著的bug</font>)
  - 动态申请堆空间，<font color=blue>用完后不归还</font>
  - C++语言中<font color=red>没有垃圾回收</font>的机制
  - 指针<font color=deeppink>无法控制</font>所指堆空间的生命周期
  
## 深度的思考
- 我们需要什么？
  - 需要一个<font color=deeppink>特殊的</font>指针
  - 指针生命周期结束时<font color=red>主动释放堆空间</font>
  - 一片堆空间<font color=blue>最多只能由一个指针标识</font>
  - <font color=Fuchsia>杜绝</font>指针运算和指针比较
  
## 智能指针分析
- 解决方案
  - <font color=red>重载指针特征操作符</font>(<font color=red>-></font>和<font color=red>*</font>)
  - 只能通过类的<font color=blue>成员函数重载</font>
  - 重载函数<font color=deeppink>不能</font>使用参数
  - 只能定义<font color=red>一个</font>重载函数
- 智能指针使用军规
  - <font color=Fuchsia>只能用来指向堆空间中的对象或者变量</font>
  
## 小结
- 指针特征操作符(<font color=red>-></font>和<font color=red>*</font>)可以被重载
- 重载指针特征符能够<font color=blue>使用对象代替指针</font>
- 智能指针<font color=red>只用于指向堆空间中的内存</font>
- 智能指针的意义在于<font color=Fuchsia>最大程度的避免内存问题</font>