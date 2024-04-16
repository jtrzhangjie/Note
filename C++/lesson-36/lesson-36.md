# 经典问题解析三
## 关于赋值的疑问
- 什么时候需要<font color=blue>重载赋值操作符</font>？编译器是否提供<font color=red>默认的赋值操作</font>？
- 编译器为每个类<font color=blue>默认重载了赋值操作符</font>
- 默认的赋值操作符<font color=red>仅完成浅拷贝</font>
- 当需要进行<font color=Fuchsia>深拷贝时必须重载赋值操作符</font>
- 赋值操作符与拷贝构造函数有相同的存在意义
- 问题分析
  
  ![Alt text](image.png)

- 一般性原则
  <font color=red>重载赋值操作符，必然需要实现深拷贝！！！</font>

## 不积跬步无以至千里
- 编译器默认提供的函数
  
  ![Alt text](image-1.png)

## 关于string的疑问
- 下面的代码输出什么？为什么？
  
  ![Alt text](image-2.png)

- 问题分析
  
  ![Alt text](image-3.png)

- 下面的代码输出什么？为什么？
  
  ![Alt text](image-4.png)

- 问题分析
  
  ![Alt text](image-5.png)

## 小结
- 在需要进行<font color=Fuchsia>深拷贝</font>的时候必须<font color=red>重载赋值操作符</font>
- <font color=blue>赋值操作符</font>和拷贝构造函数有同等重要的意义
- <font color=red>string</font>类通过一个数据空间保存字符数据
- <font color=red>string</font>类通过一个成员变量保存当前字符串的长度
- C++开发时尽量避开C语言中惯用的编程思想