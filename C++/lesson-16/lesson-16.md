# 类的真正形态
## 类的关键字
- <font color=blue>struct</font>在C语言中以及有了自己的含义，<font color=Fuchsia>必须继续兼容</font>
- 在C++中提供了<font color=DeepPink>新的关键字</font><font color=blue>class</font>用于类的定义
- <font color=blue>class</font>和<font color=blue>struct</font>的用法是完全相同的
- 在用<font color=blue>struct</font>定义类时，所有成员的<font color=red>默认访问级别为</font><font color=blue>public</font>
- 在用<font color=blue>class</font>定义类时，所有成员的<font color=red>默认访问级别为</font><font color=blue>private</font>
  
  ![Alt text](image.png)

## 类的真正形态
- C++中的类支持<font color=red>声明</font>和<font color=red>实现</font>的<font color=DeepPink>分离</font>
- 将类的<font color=purple>实现</font>和<font color=Fuchsia>定义</font>分开
  - <font color=green>.h头文件</font>中只有类的<font color=MediumTurquoise>声明</font>
    - <font color=Fuchsia>成员变量</font>和<font color=Fuchsia>成员函数</font>的声明
  - <font color=green>.cpp源文件</font>中完成类的其他<font color=MediumTurquoise>实现</font>
    - 成员函数的具体实现
  
## 小结
- C++引进了新的关键字<font color=blue>class</font>用于定义类
- <font color=blue>struct</font>和<font color=blue>class</font>的区别在于<font color=blue>默认访问级别的不同</font>
- C++中的类支持<font color=red>声明</font>和<font color=red>实现</font>的<font color=DeepPink>分离</font>
  - <font color=purple>在头文件中声明类</font>
  - <font color=purple>在源文件中实现类</font>