# 被遗弃的多重继承(下)
## 多重继承的问题三
- 多重继承可能产生多个虚函数表
  
  ![Alt text](image.png)

  ![Alt text](image-1.png)

## 正确的使用多重继承

![Alt text](image-2.png)

- 一些有用的工程建议
  - 先继承自<font color=blue>一个父类</font>，然后实现<font color=deeppink>多个接口</font>
  - 父类中提供<font color=blue>equal()</font>成员函数
  - equal()成员函数用于<font color=deeppink>判断指针是否指向当前对象</font>
  - 与<font color=deeppink>多重继承</font>相关的强制类型转换用<font color=blue>dynamic_cast</font>完成
  
## 小结
- 多继承中可能出现<font color=blue>多个虚函数表指针</font>
- 与<font color=deeppink>多重继承</font>相关的强制类型转换用<font color=blue>dynamic_case</font>完成
- 工程开发中采用<font color=blue>“单继承多接口”</font>的方式使用多继承
- 父类提供成员函数用于<font color=deeppink>判断指针是否指向当前对象</font>