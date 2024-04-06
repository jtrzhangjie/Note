# 函数重载分析(下)
## 重载与指针
- 下面的<font color=blue>函数指针</font>将保存哪个函数的地址？
  
  ![Alt text](image.png)

- <font color=blue>函数重载</font>遇上<font color=red>函数指针</font>
  - 将<font color=Fuchsia>重载函数名</font>赋值给<font color=blue>函数指针</font>时
    1. 根据重载规则挑选与<font color=MediumTurquoise>函数指针参数列表一致的</font>候选者
    2. <font color=Fuchsia>严格匹配</font>候选者的函数类型与函数指针的<font color=Fuchsia>函数类型</font>
- <font color=red>注意</font>
  - 函数重载<font color=Fuchsia>必然发生在同一个作用域</font>
  - 编译器需要用<font color=red>参数列表</font>或<font color=MediumTurquoise>函数类型</font>进行函数选择
  - <font color=red>无法</font>直接通过<font color=Fuchsia>函数名</font>得到重载函数的<font color=green>入口地址</font>
  
## C++和C相互调用
- 实际工程中<font color=Fuchsia>C++和C代码相互调用</font>是不可避免的
- <font color=Fuchsia>C++</font>编译器能够<font color=purple>兼容C语言的编译方式</font>
- <font color=Fuchsia>C++</font>编译器会<font color=red>优先使用C++的编译方式</font>
- <font color=blue>extern</font>关键字能<font color=red>强制让C++编译器进行C方式的编译</font>
  
  ![Alt text](image-1.png)

## 如何让一段代码只用C的方式进行编译
- <font color=blue>__cplusplus</font>是C++编译器<font color=red>内置的标准宏定义</font>
- <font color=blue>__cplusplus</font>的意义
  - 确保C代码以<font color=Fuchsia>统一的C方式被编译成目标问题</font>
  
  ![Alt text](image-2.png)

## 注意事项
- C++编译器<font color=Fuchsia>不能以C的方式编译重载函数</font>
- <font color=Fuchsia>编译方式决定</font>函数名被编译后的<font color=Fuchsia>目标名</font>
  - <font color=blue>C++</font>编译方式将<font color=green>函数名</font>和<font color=yellow>参数列表</font>编译成<font color=blue>目标名</font>
  - <font color=purple>C</font>编译方式只将<font color=red>函数名</font>作为<font color=purple>目标名</font>进行编译

## 小结
- <font color=blue>函数重载</font>是C++对C的一个<font color=Fuchsia>重要升级</font>
- 函数重载通过<font color=orange>函数参数列表区分不通的同名函数</font>
- <font color=blue>extern</font>关键字能够实现<font color=blue>C和C++的相互调用</font>
- <font color=red>编译方式决定</font>符号表中的函数名的最终<font color=red>目标名</font>