# 经典问题解析一
## 关于const的疑问
- <font color=blue>const</font>常量的<font color=Fuchsia>判别准则</font>
  - 只有用<font color=red>字面量</font>初始化的<font color=blue>const</font>常量才会<font color=PowderBlue>进入符号表</font>
  - 使用其他<font color=purple>变量</font>初始化的<font color=blue>const</font>常量仍然是<font color=purple>只读变量</font>
  - 被<font color=blue>volatile</font>修饰的<font color=blue>const</font>常量<font color=PowderBlue>不会进入符号表</font>
  在<font color=deeppink>编译期间不能直接确定初始值</font>的<font color=blue>const</font>标识符，都被作为<font color=purple>只读变量</font>处理
- <font color=blue>const</font>引用的类型与初始化变量的类型
  - <font color=green>相同</font>：<font color=Fuchsia>初始化变量成为只读变量</font>
  - <font color=deeppink>不同</font>：<font color=PowderBlue>生成一个新的只读变量</font>
  
## 关于引用的疑问？
- <font color=Fuchsia>指针是一个变量</font>
  - <font color=purple>值为一个内存地址</font>，不需要初始化，可以保存不同的地址
  - 通过指针<font color=PowderBlue>可以访问对应内存地址中的值</font>
  - 指针可以被<font color=blue>const</font>修饰成为<font color=deeppink>常量</font>或者<font color=deeppink>只读变量</font>
- <font color=red>引用只是一个变量的新名字</font>
  - 对引用的<font color=Fuchsia>操作</font>(赋值，取地址等)都会<font color=PowderBlue>传递到代表的变量上</font>
  - <font color=blue>const</font>引用使其代表的<font color=green>变量具有只读熟悉</font>
  - 引用<font color=deeppink>必须在定义时初始化</font>，之后无法代表其他变量
- 从<font color=blue>使用</font>C++语言的角度来看
  - <font color=blue>引用</font>与<font color=blue>指针</font>没有任何的关系
  - <font color=green>引用是变量的新名字</font>，操作引用就是操作对应的变量
- 从C++<font color=Crimson>编译器</font>的角度看
  - 为了支持新概念，“引用”必须要一个有效的解决方案
  - <font color=red>在编译器内部，使用指针常量来实现“引用”</font>
  - 因此，“引用”在<font color=PowderBlue>定义时必须初始化</font>
- 在工程项目开发中
  - <font color=blue>当进行C++编程时</font>，<font color=purple>直接站在使用的角度看待引用</font>，与指针毫无关系，引用就是变量的别名
  - <font color=deeppink>当对C++代码进行调试分析时</font>，<font color=Fuchsia>一些特殊情况</font>，可以考虑站在C++编译器的角度看待引用
  
## 小结
- <font color=blue>指针</font>是一个<font color=Fuchsia>变量</font>
- <font color=purple>引用</font>是一个变量的<font color=PowderBlue>新名字</font>
- <font color=blue>const</font>引用能够生成<font color=MediumTurquoise>新的只读变量</font>
- 在编译器内部使用<font color=red>指针常量实现“引用”</font>
- <font color=deeppink>编译时不能直接确定初始值</font>的<font color=blue>const</font>标识符都是<font color=deeppink>只读变量</font>