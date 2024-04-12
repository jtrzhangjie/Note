# 初始化列表的使用
## 类成员的初始化
- C++中提供了初始化列表<font color=blue>对成员变量进行初始化</font>
- 语法规则
  
  ![Alt text](image.png)

- 注意事项
  - 成员的<font color=red>初始化顺序</font>与成员的<font color=blue>声明顺序相同</font>
  - 成员的初始化顺序<font color=Fuchsia>与初始化列表中的位置无关</font>
  - 初始化列表<font color=purple>先于构造函数的函数体执行</font>

## 类中的const成员
- 类中的<font color=blue>const</font>成员会被<font color=red>分配空间</font>的
- 类中的<font color=blue>const</font>成员的<font color=Fuchsia>本质是只读变量</font>
- 类中的<font color=blue>const</font>成员<font color=purple>只能在初始化列表中指定初始值</font>
  编译器<font color=deeppink>无法</font>直接得到<font color=blue>const</font>成员的初始值，因此无法进入符号表成为真正意义上的常量
- 初始化和赋值不同
  - 初始化：对<font color=red>正在创建的对象</font>进行初值设置
  - 赋值：对<font color=blue>已经存在的对象</font>进行值设置
  
## 小结
- 类中可以<font color=blue>使用初始化列表对成员进行初始化</font>
- 初始化列表<font color=Fuchsia>先于构造函数体执行</font>
- 类中可以定义<font color=red>const</font>成员变量
- <font color=red>const</font>成员变量<font color=purple>必须在初始化列表中指定初值</font>
- <font color=red>const</font>成员变量为只读变量