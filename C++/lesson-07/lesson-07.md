# 函数参数的扩展
## 函数参数的默认值
- C++中可以在<font color=red>函数声明时为参数提供一个默认值</font>
- 当函数调用时<font color=purple>没有提供参数的值</font>，则<font color=blue>使用默认值</font>
  
  ![Alt text](image.png)

- 参数的默认值必须在<font color=red>函数声明中指定</font>
- 函数默认参数的规则
  - 参数的默认值必须<font color=red>从右向左提供</font>
  - 函数调用时<font color=blue>使用了默认值</font>，则后续参数<font color=Fuchsia>必须</font>使用默认值
  
## 函数占位参数
- 在C++中可以为函数提供<font color=purple>占位参数</font>
  - 占位参数<font color=Fuchsia>只有参数类型声明</font>，而<font color=red>参数名声明</font>
  - 一般情况下，在函数体内部<font color=blue>无法使用占位参数</font>
  
  ![Alt text](image-1.png)

- 函数占位参数的意义
  - 占位参数与默认参数结合起来使用
  - <font color=Fuchsia>兼容C语言程序</font>中可能出现的不规范写法
  
## 小结
- C++中支持函数<font color=purple>参数的默认值</font>
- 如果函数<font color=Fuchsia>调用时没有提供参数值</font>，则<font color=MediumTurquoise>使用默认值</font>
- 参数的默认值必须<font color=red>从右向左提供</font>
- 函数调用时<font color=blue>使用了默认值</font>，则后续参数<font color=Fuchsia>必须</font>使用默认值
- C++中支持占位参数，<font color=MediumTurquoise>用于兼容C语言中不规范的写法</font>