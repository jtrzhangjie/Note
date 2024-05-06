# C++中的异常处理(下)
## C++中的异常处理

![Alt text](image.png)

- <font color=blue>catch</font>中捕获的异常可以被重新解释后抛出
- 工程开发中使用这样的方式<font color=blue>统一异常类型</font>
  
  ![Alt text](image-1.png)

- 异常的类型可以是<font color=blue>自定义类类型</font>
- 对于类类型的异常的匹配依旧是<font color=red>至上而下严格匹配</font>
- <font color=fuchsia>赋值兼容性原则</font>在异常匹配中依然适用
- 一般而言
  - <font color=red>匹配子类异常的catch放在上部</font>
  - <font color=red>匹配父类异常的catch放在下部</font>
- 在工程中会定义<font color=blue>一系列的异常类</font>
- 每个类代表工程中可能出现的一种异常类型
- <font color=red>代码复用时</font>可能需要<font color=purple>重解释不同的异常类</font>
- 在定义catch语句块时<font color=deeppink>推荐使用引用作为参数</font>
- C++标准库中提供了实用异常类族
- 标准库中的异常都是从<font color=red>exception</font>类派生的
- exception类有两个主要的分支
  - <font color=blue>logic_error</font>
    - 常用于程序中的可避免逻辑错误
  - <font color=deeppink>runtime_error</font>
    - 常用于程序中无法避免的恶性错误
- 标准库中的异常
  
  ![Alt text](image-2.png)


## 小结
- <font color=blue>catch</font>语句块中可以抛出异常
- 异常的类型可以是<font color=blue>自定义类类型</font>
- <font color=fuchsia>赋值兼容性原则</font>在异常匹配中依然适用
- 标准库中的异常都是从<font color=red>exception</font>类派生的