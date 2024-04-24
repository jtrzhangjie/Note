# 类模板的概念和意义
## 类模板
- 一些类主要用于<font color=blue>存储和组织数据元素</font>
- 类中数据组织的方式和数据元素的<font color=blue>具体类型无关</font>
- 如：数组类、链表类、Stack类、Queue类等
  <font color=red>C++中将模板的思想应用于类,使得类的实现不关注数据元素的具体类型,而只关注类所需要实现的功能。</font>
- C++中的类模板
  - 以相同的方式处理不同的类型
  - 在类声明前使用<font color=blue>template</font>进行表示
  - <<font color=blue>typename</font> <font color=deeppink>T</font>>用于说明类中使用的<font color=deeppink>泛指类型 T</font>
  
  ![Alt text](image.png)

- 类模板的应用
  - 只能显示指定具体类型，<font color=deeppink>无法自动推导</font>
  - 使用具体类型<<font color=blue>Type</font>>定义对象
  
  ![Alt text](image-1.png)

- 声明的<font color=blue>泛指类型</font> <font color=deeppink>T</font>可以出现在类模板的任意地方
- 编译器对类模板的处理方式和函数模板相同
  - 从类模板通过具体类型<font color=blue>产生不同的类</font>
  - <font color=red>在声明的地方对类模板代码本身进行编译</font>
  - <font color=red>在使用的地方对参数替换后的代码进行编译</font>
- 类模板的工程应用
  - 类模板必须在<font color=deeppink>头文件中定义</font>
  - 类模板<font color=red>不能分开实现在不同的文件中</font>
  - 类模板<font color=blue>外部定义的</font>成员函数需要加上<font color=blue>模板<></font>声明
  
## 小结
- 泛型编程的思想可以应用于类
- 类模板以<font color=blue>相同的方式处理不同类型的数据</font>
- 类模板非常<font color=red>适用于</font>编写<font color=red>数据结构</font>相关的代码
- 类模板在使用时<font color=deeppink>只能显示指定类型</font>