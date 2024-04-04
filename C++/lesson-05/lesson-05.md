# 引用的本质分析
## 引用的意义
- 引用作为<font color=red>变量别名</font>而存在，因此在一些场合<font color=LightSkyBlue>可以代替指针</font>
- 引用<font color=blue>相对于指针</font>来说具有更好的<font color=Fuchsia>可读性</font>和<font color=MediumOrchid>实用性</font>
<div align=center>
<img src="image.png"/> 
</div>

  <center><font color=blue>注意：
  函数中的引用形参不需要进行初始化！！</font></center>

## 特殊的引用
- <font color=blue>const</font>引用
  - 在C++中可以声明<font color=blue>const</font>引用
  - <font color=blue>const</font> <font color=red>Type</font>& name = var;
  - <font color=blue>const</font>引用可以让变量拥有<font color=Fuchsia>只读属性</font>
  
![Alt text](image-1.png)

  - 当使用<font color=red>常量</font>对<font color=blue>const</font>引用进行初始化时，C++编译器会为常量值分配空间，并将引用名作为这段空间的别名。
  ![Alt text](image-2.png)

  <font color=blue>结论：
  使用常量对const引用初始化后将生成一个只读变量！！！</font>

## 引用的本质
- 引用在C++中的<font color=red>内部实现</font>是一个<font color=red>指针常量</font>
  ![Alt text](image-3.png)
  注意：
  1. C++编译器在编译过程中用<font color=red>指针常量</font>作为引用的<font color=blue>内部实现</font>，因此引用所占用的空间大小与指针相同
  2. 从使用的角度，<font color=Fuchsia>引用只是一个别名</font>，C++为了实用性而隐藏了引用的存储空间这一细节

## 引用的意义
- C++中的<font color=blue>引用</font>旨在大多数的情况下<font color=red>代替指针</font>
  - 功能性：可以<font color=purple>满足</font>多数需要<font color=Fuchsia>使用指针的场合</font>
  - 安全性：可以<font color=MediumTurquoise>避开</font>由于指针操作不当而带来的内存错误
  - 操作性：<font color=red>简单已用</font>，又不失<font color=purple>功能强大</font>

## 小结
- 引用作为<font color=red>变量别名</font>而存在旨在<font color=MediumTurquoise>代替指针</font>
- <font color=blue>const</font>引用可以使得<font color=red>变量具有只读属性</font>
- <font color=Fuchsia>引用</font>在编译器内部使用指针常量实现
- <font color=red>引用</font>的最终<font color=blue>本质为指针</font>
- 引用可以尽可能的避开内存错误
