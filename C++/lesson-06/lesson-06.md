# 内联函数分析
## 常量与宏回顾
- C++中的<font color=blue>const</font>常量可以替代宏常数定义，如：
  ![Alt text](image.png)
    
  <font color=red>C++中是否有解决方案替代宏代码片段？</font>

## 内联函数
- C++中推荐使用<font color=red>内联函数</font>替代宏代码片段
- C++中使用<font color=blue>inline</font>关键字声明内联函数
  
  ![Alt text](image-1.png)

  <font color=red>内联函数声明时<font color=blue>inline</font>关键字必须和函数定义结合在一起，否则编译器会直接忽略内联请求</font>
- C++编译器可以<font color=blue>将一个函数进行内联编译</font>
- 被C++编译器内联编译的函数叫做<font color=red>内联函数</font>
- C++编译器直接将函数体插入函数调用的地方
- 内联函数<font color=red>没有</font>普通函数调用时的<font color=Fuchsia>额外开销</font>(压栈，跳转，返回)
  <font color=blue>C++编译器不一定满足函数的内联请求</font>
- <font color=blue>内联函数</font>具有普通函数的特征(<font color=red>参数检查</font>，<font color=Fuchsia>返回类型</font>等)
- 函数的内联请求可能被编译器拒绝
- 函数被<font color=Fuchsia>内联编译后</font>，函数体直接扩展到调用的地方
  <font color=red>宏代码片段由预处理器处理，进行简单的文本替换，没有任何编译过程，因此可能出现副作用</font>
- <font color=red>现代</font><font color=blue>C++</font><font color=red>编译器</font>能够进行编译优化，一些函数即使没有<font color=blue>inline</font>声明，也可能被内联编译
- 一些现代C++编译器提供了<font color=Fuchsia>扩展语法</font>，能够对函数进行<font color=Fuchsia>强制内联</font>，如：
  - g++: <font color=blue>\_\_attribute__((always_inline))</font>属性
  - MSVC: <font color=blue>\_\_forceinline</font>
  
## 注意事项
- C++中<font color=blue>inline</font>内联编译的限制：
  - 不能存在任何形式的<font color=red>循环语句</font>
  - 不能存在<font color=blue>过多的条件判断语句</font>
  - 函数体不能<font color=Fuchsia>过于庞大</font>
  - 不能对函数进行取址操作
  - 函数内联声明必须在调用语句之前

## 小结
- C++中可以通过<font color=blue>inline</font>声明内联函数
- 编译器直接将<font color=red>内联函数扩展到函数调用的地方</font>
- <font color=blue>inline</font>只是一种请求，编译器<font color=Fuchsia>不一定允许</font>这种请求
- 内联函数<font color=red>省去</font>了函数调用时压栈，跳转和返回的开销