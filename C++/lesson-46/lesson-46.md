# 继承中的构造与析构
## 子类对象的构造
- 子类中可以定义构造函数
- 子类构造函数
  - 必须对继承而来的成员进行初始化
    - 直接通过<font color=deeppink>初始化列表</font>或者<font color=deeppink>赋值的方式</font>进行初始化
    - <font color=red>调用父类构造函数</font>进行初始化
- 父类构造函数在子类中的调用方式
  - <font color=blue>默认调用</font>
    - 适用于<font color=MediumTurquoise>无参构造函数</font>和<font color=blue>使用默认参数的构造函数</font>
  - <font color=Fuchsia>显示调用</font>
    - 通过<font color=red>初始化列表进行调用</font>
    - 适用于<font color=deeppink>所有</font>父类构造函数
- 父类构造函数的调用
  
  ![Alt text](image.png)

## 子类对象的构造
- 构造规则
  - 子类对象在创建时会<font color=blue>首先调用父类的构造函数</font>
  - <font color=red>先执行父类构造函数</font>再执行子类的构造函数
  - 父类构造函数可以被<font color=purple>隐式调用</font>或者<font color=fuchsia>显示调用</font>
- <font color=blue>对象</font>创建时构造函数的调用顺序
  - 1. <font color=purple>调用父类的构造函数</font>
  - 2. 调用<font color=orange>成员变量的构造函数</font>
  - 3. 调用类自身的构造函数
  <font color=deeppink>口诀心法：
  先父母，后客人，再自己</font>

## 子类对象的析构
- <font color=blue>析构函数</font>的调用顺序于构造函数想法
  - 1. 执行<font color=deeppink>自身的</font>析构函数
  - 2. 执行<font color=red>成员变量的</font>析构函数
  - 3. 执行<font color=purple>父类的</font>析构函数

## 小结
- 子类对象在创建时<font color=blue>需要调用父类构造函数</font>进行初始化
- 先执行父类构造函数然后执行<font color=fuchsia>成员的构造函数</font>
- 父类构造函数<font color=red>显示调用需要再初始化列表中进行</font>
- 子类对象在销毁时需要调用父类析构函数进行处理
- 析构顺序与构造顺序<font color=deeppink>对称相反</font>