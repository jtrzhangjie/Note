# 深入理解函数模板
## 函数模板
- 函数模板深入理解
  - 编译器从函数模板通过具体类型<font color=blue>产生不同的函数</font>
  - 编译器会<font color=deeppink>对函数模板进行两次编译</font>
    - <font color=red>对模板代码本身进行编译</font>
    - <font color=red>对参数替换后的代码进行编译</font>
- 注意事项：
  - 函数模板本身<font color=blue>不允许隐式类型转换</font>
    - <font color=blue>自动推导类型时，必须严格匹配</font>
    - 显示类型指定时，能够进行隐式类型转换
  
## 多参数函数模板
- 函数模板可以定义<font color=blue>任意多个不同的类型参数</font>
  
  ![Alt text](image.png)

- 对于多参数函数模板
  - <font color=blue>无法自动</font>推导返回值类型
  - 可以<font color=blue>从左向右</font>部分指定类型参数
  
  ![Alt text](image-1.png)

## 重载函数模板
- 函数模板可以像普通函数一样被重载
  - C++编译器<font color=blue>优先考虑普通函数</font>
  - 如果函数模板可以产生一个<font color=deeppink>更好的匹配</font>，那么选择模板
  - 可以通过<font color=red>空模板实参列表</font>限定编译器只匹配模板
  
  ![Alt text](image-2.png)

## 小结
- 函数模板通过具体类型<font color=blue>产生不同的函数</font>
- 函数模板可以定义<font color=red>任意多个不同的类型参数</font>
- 函数模板中的<font color=fuchsia>返回值类型必须显示指定</font>
- 函数模板可以像普通函数一样被重载