# C++中的异常处理(上)
## C++异常处理
- C++内置了一场处理的语法元素<font color=blue>try...catch...</font>
  - <font color=blue>try</font>语句处理正常代码逻辑
  - <font color=blue>catch</font>语句处理异常情况
  - <font color=blue>try</font>语句中的异常由对应的<font color=blue>catch</font>语句处理
    
    ![Alt text](image.png)

- C++通过<font color=blue>throw</font>语句抛出异常信息
  
  ![Alt text](image-1.png)

- C++异常处理分析
  - <font color=blue>throw</font>抛出的异常必须被<font color=blue>catch</font>处理
    - 当前函数<font color=blue>能够处理异常</font>，程序继续往下执行
    - 当前函数<font color=deeppink>无法处理异常</font>，则函数<font color=deeppink>停止执行</font>，并返回
   
   ![Alt text](image-2.png)

- 同一个<font color=blue>try</font>语句可以跟上多个<font color=blue>catch</font>语句
  - <font color=blue>catch</font>语句可以定义具体处理的异常类型
  - <font color=fuchsia>不同类型的异常</font>由不同的<font color=blue>catch</font>语句负责处理
  - <font color=deeppink>try</font>语句中可以抛出任何类型的异常
  - <font color=red>catch(...)</font>用于处理所有类型的异常
  - 任何异常都只能被捕获(<font color=blue>catch</font>)<font color=deeppink>一次</font>
- 异常处理匹配规则

![Alt text](image-3.png)

## 小结
- C++中直接支持异常处理的概念
- <font color=blue>try...catch...</font>是C++中异常处理的专用语句
- <font color=blue>try</font>语句处理正常代码逻辑，<font color=blue>catch</font>语句处理异常情况
- 同一个<font color=blue>try</font>语句可以跟上多个<font color=blue>catch</font>语句
- 异常处理必须严格匹配，<font color=deeppink>不进行任何的类型转换</font>