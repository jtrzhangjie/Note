# 类型转换函数(上)
## 再论类型转换
- 标准数据类型之间会进行<font color=MediumTurquoise>隐式的类型安全转换</font>
- 转换规则如下:

  ![Alt text](image.png)


## 问题
<font color=blue>普通类型</font>与<font color=red>类类型</font>之间能否进行<font color=purple>类型转换</font>？
<font color=red>类类型</font>之间能否进行<font color=purple>类型转换</font>

## 再论构造函数
- 构造函数可以定义<font color=blue>不同类型的参数</font>
- 参数满足下列条件时称为<font color=blue>转换构造函数</font>
  - 有且仅有一个参数
  - 参数是基本类型
  - 参数是其他类类型
  
## 编译器的行为

![Alt text](image-1.png)

- 编译器<font color=blue>尽力尝试</font>的结果是<font color=deeppink>隐式类型转换</font>
- 隐式类型转换
  - 会让程序以<font color=Fuchsia>意想不到</font>的方式进行工作
  - 是工程中<font color=red>bug</font>的重要来源
- 工程中通过<font color=blue>explicit</font>关键字<font color=red>杜绝编译器的转换尝试</font>
- 转换构造函数被<font color=blue>explicit</font>修饰时只能进行<font color=red>显示转换</font>
  - 转换方式
    - <font color=blue>static_case</font><font color=red>ClassName</font>(value);
    - <font color=red>ClassName</font>(value);
    - (<font color=red>ClassName</font>)value;<font color=green> // 不推荐</font>
  
## 小结
- 转换构造函数<font color=blue>只有一个参数</font>
- 转换构造函数的<font color=purple>参数类型是其他类型</font>
- 转换构造函数在类型转换时被调用
- 隐式类型转换时工程中<font color=red>bug</font>的重要来源
- <font color=blue>explicit</font>关键字用于<font color=red>杜绝</font>隐式类型转换