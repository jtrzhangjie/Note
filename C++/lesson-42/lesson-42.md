# 类型转换函数(下)
## 类型转换函数
- C++类中可以定义<font color=blue>类型转换函数</font>
- 类型转换函数用于<font color=red>将类对象转换成其他类型</font>
- 语法规则：

  ![Alt text](image.png)

- 类型转换函数
  - 与<font color=blue>转换构造函数</font>具有同等的地位
  - 使得编译器有能力<font color=red>将对象转换为其他类型</font>
  - 编译器能够<font color=deeppink>隐式的使用</font>类型转换函数

![Alt text](image-1.png)

- <font color=red>无法抑制</font>隐式的类型转换函数调用
- 类型转换函数可能与转换构造函数冲突
- 工程中以<font color=Fuchsia>Type</font> <font color=blue>toType</font>()的公有成员函代替类型转换函数
  
## 小结
- C++类中可以定义<font color=blue>类型转换函数</font>
- 类型转换函数用于<font color=red>将类对象转换为其他类型</font>
- 类型转换函数与<font color=purple>转换构造函数</font>具有同等的地位
- 工程中以<font color=Fuchsia>Type</font> <font color=blue>toType</font>()的公有成员函代替类型转换函数