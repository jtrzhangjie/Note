# 父子间的冲突
## 父子间的冲突
- 子类<font color=blue>可以定义</font>父类中的<font color=red>同名成员</font>
- 子类中的成员将<font color=fuchsia>隐藏父类中的同名成员</font>
- 父类中的<font color=purple>同名成员依然存在于子类中</font>
- 通过<font color=deeppink>作用域分辨符</font>(<font color=deeppink>::</font>)访问父类中的同名成员
- 访问父类中的同名成员

![Alt text](image.png)

## 再论重载
- 类中的成员函数可以进行重载
  - 1. 重载函数的<font color=fuchsia>本质为多个不同的函数</font>
  - 2. 函数名和参数列表是唯一的标识
  - 3. 函数重载<font color=red>必须发生在同一个作用域中</font>
  
## 父子间的冲突
- 子类中的函数将<font color=orange>隐藏父类的同名函数</font>
- 子类<font color=deeppink>无法重载</font>父类中的成员函数
- 使用<font color=fuchsia>static_case</font>访问父类中的同名函数
- 子类可以定义父类中完全相同的成员函数
  
## 小结
- 子类<font color=blue>可以定义</font>父类中的<font color=red>同名成员</font>
- 子类中的成员将<font color=fuchsia>隐藏父类中的同名成员</font>
- 子类和父类中的函数<font color=purple>不能构成重载关系</font>
- 子类可以定义父类中完全相同的成员函数
- 使用<font color=deeppink>作用域分辨符</font>访问父类中的同名成员