# 逻辑操作符的陷阱
## 潜规则
- 逻辑运算符的原生语义
  - 操作数只有两种(<font color=blue>true</font>和<font color=blue>false</font>)
  - 逻辑表达式<font color=Fuchsia>不用完全计算就能确定最终值</font>(短路准则)
  - 最终结果只能是<font color=blue>true</font>或者<font color=blue>false</font>
  
## 重载逻辑操作符
- <font color=blue>逻辑操作符</font>可以重载吗？重载逻辑操作符<font color=red>有什么意义</font>
- 问题的<font color=deeppink>本质分析</font>
  - 1. C++通过函数调用扩展操作符的功能
  - 2. <font color=red>进入函数体前必须完成所有参数的计算</font>
  - 3. 函数参数的计算次序是不定的
  - 4. <font color=purple>短路法则完全失效</font>
  逻辑操作符重载后<font color=red>无法完全实现</font>原生的语义
- 一些有用的建议
  - <font color=deeppink>实际工程开发中避免重载逻辑操作符</font>
  - 通过<font color=red>重载比较操作符</font>代替逻辑操作符重载
  - 直接<font color=Fuchsia>使用成员函数</font>代替逻辑操作符重载
  - 使用<font color=deeppink>全局函数</font>对逻辑操作符进行重载
  
## 小结
- C++从<font color=purple>语法上支持</font>逻辑操作符重载
- 重载后逻辑操作符<font color=deeppink>不满足短路法则</font>
- 工程开发中<font color=red>不要重载逻辑操作符</font>
- 通过重载比较操作符替换逻辑操作符重载
- 通过<font color=blue>专用成员函数</font>替换逻辑操作符重载