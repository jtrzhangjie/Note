# 对象的构造(上)
## 对象的初始化
- 从程序设计的角度，<font color=blue>对象只是变量</font>，因此：
  - 在<font color=red>栈</font>上常见对象时，成员变量初始为<font color=red>随机值</font>
  - 在<font color=Fuchsia>堆</font>上创建对象时，成员变量初始为<font color=Fuchsia>随机值</font>
  - 在<font color=purple>静态存储区</font>创建对象时，成员变量初始为<font color=purple>0</font>值
- 生活中的对象都是在<font color=red>初始化后上市</font>的
- <font color=blue>初始状态</font>(<font color=Fuchsia>出厂设置</font>)是对象普遍存在的一个状态
- <font color=red>一般而言</font>，<font color=Fuchsia>对象都需要一个确定的初始状态</font>
- <font color=purple>解决方案</font>
  - 在类中提供一个<font color=blue>public</font>的initialize函数
  - 对象创建后立即调用initialize函数进行初始化
  
  ![Alt text](image.png)

- 存在的问题
  - initialize只是一个<font color=red>普通函数</font>，<font color=purple>必须显示调用</font>
  - 如果<font color=deeppink>未调用</font>initialize函数，<font color=Fuchsia>运行结果是不确定的</font>
  
## 构造函数
- C++中可以定义与<font color=red>类名相同</font>的特殊<font color=Fuchsia>成员函数</font>
  - 这种<font color=deeppink>特殊的</font>成员函数叫做<font color=deeppink>构造函数</font>
    - <font color=green>构造没有任何返回类型的声明</font>
    - <font color=purple>构造函数在对象定义时自动被调用</font>

## 小结
- 每个<font color=red>对象</font>在使用之前<font color=Fuchsia>都应该初始化</font>
- 类的<font color=blue>构造函数</font>用于对象的<font color=deeppink>初始化</font>
- 构造函数<font color=purple>与类同名并且没有返回值</font>
- 构造函数在对象定义时<font color=green>自动被调用</font>