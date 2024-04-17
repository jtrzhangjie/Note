# 逗号操作符的分析
## 逗号操作符
- 逗号操作符(<font color=red>,</font>)可以构成逗号表达式
  - 逗号表达式用于<font color=red>将多个子表达式连接成为一个表达式</font>
  - 逗号表达式的值为<font color=green>最后一个子表达式的值</font>
  - 逗号表达式中的<font color=Fuchsia>前N-1个子表达式可以没有返回值</font>
  - 逗号表达式按照<font color=red>从左向右的顺序</font>计算每个子表达式的值
  
  ![Alt text](image.png)


## 重载逗号操作符
- 在C++中重载逗号操作符是<font color=Fuchsia>合法的</font>
- 使用<font color=red>全局函数</font>对逗号操作符进行重载
- 重载函数的<font color=blue>参数</font>必须有一个是<font color=blue>类类型</font>
- 重载函数的<font color=deeppink>返回值</font>类型必须是<font color=deeppink>引用</font>
  
  ![Alt text](image-1.png)

- 问题的<font color=deeppink>本质分析</font>
  - 1. C++通过函数调用扩展操作符的功能
  - 2. <font color=blue>进入函数体前必须完成所有参数的计算</font>
  - 3. 函数参数的计算次序是不定的
  - 4. <font color=purple>重载后无法严格从左向右计算表达式</font>
  工程中<font color=deeppink>不要重载</font>逗号操作符！！

## 小结
- 逗号表达式<font color=blue>从左往右</font>顺序计算每个子表达式的值
- 逗号表达式的值为<font color=blue>最后一个</font>子表达式的值
- 操作符重载无法完全实现逗号操作符的原生意义
- 工程开发中<font color=blue>不要重载逗号操作符</font>