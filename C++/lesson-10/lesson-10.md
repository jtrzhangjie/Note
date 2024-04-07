# C++中的新成员
## 动态内存分配
- C++中的动态内存分配
  - C++中通过<font color=blue>new</font>关键字进行动态内存申请
  - C++中的动态内存申请是基于类型进行的
  - <font color=blue>delete</font>关键字用于内存释放
  
  ![Alt text](image.png)

- <font color=blue>new</font>关键字与<font color=red>malloc</font>函数的区别
  - <font color=blue>new关键字是C++的一部分</font>
  - <font color=orange>malloc是由C库提供的函数</font>
  - <font color=blue>new以具体类型位单位进行内存分配</font>
  - <font color=red>malloc以字节位单位进行内存分配</font>
  - <font color=blue>new在申请单个类型变量时可进行初始化</font>
  - <font color=red>malloc不具备内存初始化的特性</font>
- <font color=blue>new</font>关键字的初始化
  
  ![Alt text](image-1.png)

## C++中的命名空间
- 在C语言中只有<font color=blue>一个全局作用域</font>
  - C语言中<font color=purple>所有的全局标识符共享同一个作用域</font>
  - <font color=DeepPink>标识符之间可能发生冲突</font>
- C++中提出了<font color=Fuchsia>命名空间</font>的概念
  - 命名空间<font color=MediumTurquoise>将全局作用域分成不同的部分</font>
  - <font color=DeepPink>不同命名空间中的标识符可以同名而不会发生冲突</font>
  - <font color=blue>命名空间可以相互嵌套</font>
  - 全局作用域也叫<font color=red>默认命名空间</font>
- C++命名空间的定义
  
  ![Alt text](image-2.png)

- C++命名空间的使用
  - 使用整个命名空间：<font color=blue>using namespace</font> name;
  - 使用命名空间中的变量：<font color=blue>using</font> name<font color=Fuchsia>::</font><font color=red>variable</font>
  - 使用默认命名空间中的变量：<font color=Fuchsia>::</font><font color=red>variable</font>
  
## 小结
- C++中内置动态内存分配的<font color=blue>专用关键字</font> 
- C++中的动态内存分配可以<font color=red>同时进行初始化</font> 
- C++中的动态内存分配是<font color=Fuchsia>基于类型进行的</font> 
- C++中命名空间概念用于<font color=MediumTurquoise>解决名称冲突问题</font>