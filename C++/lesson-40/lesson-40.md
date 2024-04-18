# 前置操作符和后置操作符
## 下面的代码有没有区别？为什么？

![Alt text](image.png)

## 意想不到的事实
- 现代编译器产品会<font color=red>对代码进行优化</font>
- 优化使得最终的二进制程序<font color=Fuchsia>更加高效</font>
- 优化后二进制程序<font color=blue>丢失了C/C++的原生语义</font>
- <font color=red>不可能</font>从编译后的二进制程序<font color=red>还原C/C++程序</font>
  
## ++操作符重载
- ++操作符可以被重载
  - <font color=Fuchsia>全局函数</font>和<font color=red>成员函数</font>均可进行重载
  - 重载前置++操作符<font color=purple>不需要额外的参数</font>
  - 重载后置++操作符<font color=green>需要一个<font color=blue>int</font>类型的占位参数</font>
  
## 真正的区别
- 对于<font color=blue>基础类型</font>的变量
  - 前置++的效率和后置++的效率基本相同
  - 根据项目组编码规范进行选择
- 对于<font color=blue>类类型</font>的对象
  - 前置++的效率高于后置++
  - 尽量使用<font color=blue>前置++操作符提高程序效率</font>
  
### 小结
- <font color=blue>编译优化</font>使得最终的可执行程序<font color=red>更加高效</font>
- 前置++操作符和后置++操作符都可以被重载
- ++操作符的重载<font color=deeppink>必须符合其原生语义</font>
- <font color=Fuchsia>对于基础类型</font>，前置++与后置++的<font color=Fuchsia>效率几乎相同</font>
- <font color=purple>对于类类型</font>，前置++的效率高于后置++