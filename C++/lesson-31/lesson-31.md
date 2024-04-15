# 完善的复数类
## 完善的复数类
- 复数类应该具有的操作
  - <font color=blue>运算</font>：+，-，*，/
  - <font color=red>比较</font>：==，!=
  - <font color=purple>赋值</font>：=
  - <font color=Fuchsia>求模</font>：modulus
- 利用<font color=blue>操作符重载</font>
  - 统一<font color=red>复数</font>与<font color=Fuchsia>实数</font>的<font color=purple>运算方式</font>
  - 统一<font color=red>复数</font>与<font color=Fuchsia>实数</font>的<font color=MediumTurquoise>比较方式</font>
  
  ![Alt text](image.png)

## 注意事项
- C++规定<font color=red>赋值操作符</font>(=)<font color=purple>只能重载为成员函数</font>
- 操作符重载<font color=deeppink>不能改变</font>原操作符的<font color=Fuchsia>优先级</font>
- 操作符重载<font color=deeppink>不能改变</font>操作数的个数
- 操作符重载<font color=blue>不应改变</font>操作符的<font color=green>原有语义</font>
  
## 小结
- <font color=blue>复数</font>的概念可以<font color=red>通过自定义类实现</font>
- 复数中<font color=Fuchsia>运算操作</font>可以通过操作符重载实现
- 赋值操作符只能通过成员函数实现
- 操作符重载的<font color=MediumTurquoise>本质为函数定义</font>