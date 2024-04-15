# 数组操作符的重载
## 字符串类的兼容性
- <font color=Fuchsia>string</font>类<font color=blue>最大限度</font>的考虑了C字符串的兼容性
- 可以按照使用C字符串的方式使用<font color=Fuchsia>string</font>对象
  
  ![Alt text](image.png)

## 重载数组访问操作符
- 被忽略的事实。。。
  - 数组访问操作符是C/C++中的内置操作符
  - 数组访问操作符的原生意义是<font color=Fuchsia>数组访问</font>和<font color=Fuchsia>指针运算</font>
  
  ![Alt text](image-1.png)

- 数组访问操作符(<font color=Fuchsia>[]</font>)
  - 只能通过类的<font color=blue>成员函数重载</font>
  - 重载函数<font color=deeppink>能且仅能</font>使用一个参数
  - 可以定义不同参数的<font color=red>多个重载函数</font>
  
## 小结
- string类<font color=blue>最大程度的兼容了</font>C字符串的用法
- 数组访问操作符的重载能够<font color=purple>使得对象模拟数组的行为</font>
- 只能通过类的<font color=red>成员函数重载数组访问操作符</font>
- 重载函数<font color=deeppink>能且仅能</font>使用一个参数