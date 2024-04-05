# 函数重载分析(上)
## 自然语言中的上下文
- 你知道下面词汇中"<font color=red>洗</font>"字的含义吗？

![Alt text](image.png)

<font color=blue>结论：
- 能和“洗”字搭配的词汇有很多
- “洗”字和不同的词汇搭配有不同的含义</font>
  
## 重载的概念
- 重载
  - 如果一个标识符在<font color=red>不同的上下文有不同的意义</font>
  - 如：
    - <font color=Fuchsia>“洗”和不同的词汇搭配后又不同的含义</font>
    - <font color=purple>“play”和不同的单次搭配后又不同的含义</font>
  
## C++中的函数重载
- 函数重载
  - <font color=red>用同一个函数名定义不同的函数</font>
  - 当函数名和<font color=Fuchsia>不同的参数搭配时</font>函数的含义不同
  
  ![Alt text](image-1.png)

- 函数重载<font color=green>至少</font>满足下面一个条件
  - <font color=purple>参数个数不同</font>
  - <font color=red>参数类型不同</font>
  - <font color=Fuchsia>参数顺序不同</font>
- 当<font color=blue>函数默认参数</font>遇上<font color=Fuchsia>函数重载</font>会发生什么？
  
  ![Alt text](image-2.png)

- 编译器调用重载函数的准则
  - <font color=blue>将所有同名函数作为候选者</font>
  - <font color=blue>尝试寻找可行的候选函数</font>
    - <font color=green>精确匹配实参</font>
    - <font color=green>通过默认参数能够匹配实参</font>
    - <font color=green>通过默认类型转换匹配实参</font>
  - <font color=purple>匹配失败</font>
    - <font color=red>最终寻找到的候选函数不唯一，则出现二义性，编译失败</font>
    - <font color=red>无法匹配所有候选者，函数未定义，编译失败</font>
- 函数重载的注意事项
  - 重载函数在<font color=red>本质</font>上是<font color=purple>相互独立的不同函数</font>
  - 重载函数的<font color=MediumTurquoise>函数类型不同</font>
  - 函数<font color=Fuchsia>返回值</font><font color=red>不能</font>作为函数重载的依据
  <font color=blue>函数重载是由<font color=red>函数名</font>和<font color=green>参数列表</font>决定的</font>

## 小结
- <font color=blue>函数重载</font>是C++中引入的概念
- 函数重载用于<font color=Fuchsia>模拟自然语言</font>中的词汇搭配
- 函数重载使得C++具有<font color=purple>更丰富的语义表达能力</font>
- 函数重载的<font color=red>本质为相互独立的不同函数</font>
- C++中通过<font color=MediumTurquoise>函数名</font>和<font color=green>列表参数</font>确定函数调用
