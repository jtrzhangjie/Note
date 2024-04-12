# 对象的构造顺序
## 对象的构造顺序一
- 对于<font color=blue>局部对象</font>
  - 当程序执行流<font color=blue>到达对象的定义语句时</font>进行构造
  
  ![Alt text](image.png)

  ![Alt text](image-1.png)

## 对象的构造顺序二
- 对于<font color=blue>堆对象</font>
  - 当程序执行流<font color=red>到达</font><font color=blue>new</font><font color=red>语句时</font>创建对象
  - 使用<font color=blue>new</font>创建对象将自动触发构造函数的调用
  
  ![Alt text](image-2.png)

  
## 对象的构造顺序三
- 对于<font color=blue>全局对象</font>
  - 对象的构造顺序是<font color=red>不确定的</font>
  - 不同的编译器<font color=Fuchsia>使用不同的规则确定构造顺序</font>
  
## 小结
- <font color=red>局部对象</font>的构造顺序<font color=purple>依赖于程序的执行流</font>
- <font color=blue>堆对象</font>的构造顺序<font color=Fuchsia>依赖于new的使用顺序</font>
- <font color=MediumTurquoise>全局对象</font>的构造顺序是<font color=red>不确定的</font>