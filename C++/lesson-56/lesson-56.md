# 函数模板的概念和意义
## 交换变量的方法
- <font color=blue>定义宏代码块</font>
  - 优点：<font color=red>代码复用</font>，适合所有的类型
  - 缺点：编译器不知道宏的存在，<font color=red>缺少类型检查</font>
- <font color=deeppink>定义函数</font>
  - 优点：<font color=purple>真正的函数调用</font>，编译器对类型进行检查
  - 缺点：根据类型重复定义函数，<font color=purple>无法代码复用</font>
  
## 泛型编程
- 泛型编程的概念
  - <font color=blue>不考虑具体数据类型的编程方式</font>
  
  ![Alt text](image.png)

## 函数模板
- C++中泛型编程
  - 函数模板
    - 一种特殊的函数<font color=blue>可用不同类型进行调用</font>
    - 看起来和普通函数很相似，区别是<font color=deeppink>类型可被参数化</font>
    
    ![Alt text](image-1.png)

- 函数模板的语法规则
  - <font color=blue>template</font>关键字用于<font color=deeppink>声明开始进行泛型编程</font>
  - <font color=blue>typename</font>关键字用于<font color=deeppink>声明泛指类型</font>
  
  ![Alt text](image-2.png)

- 函数模板的使用
  - <font color=blue>自动类型推导调用</font>
  - <font color=red>具体类型显示调用</font>
  
  ![Alt text](image-3.png)

## 小结
- 函数模板是<font color=blue>泛型编程</font>在C++中的应用方式之一
- 函数模板能够<font color=red>根据实参对参数类型进行推导</font>
- 函数模板支持<font color=fuchsia>显示的指定参数类型</font>
- 函数模板是<font color=deeppink>C++中重要的代码复用方式</font>