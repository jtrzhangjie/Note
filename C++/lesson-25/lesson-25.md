# 类的静态成员变量
## 成员变量的回顾
- 通过<font color=Fuchsia>对象名</font>能够访问<font color=blue>public</font>成员变量
- 每个对象的<font color=purple>成员变量</font>都是<font color=red>专属的</font>
- 成员变量<font color=deeppink>不能</font>在对象之间<font color=MediumTurquoise>共享</font>

## 静态成员变量
- 在C++中可以定义<font color=blue>静态成员变量</font>
  - 静态成员变量<font color=red>属于整个类所有</font>
  - 静态成员变量的生命期不依赖于任何对象
  - 可以<font color=green>类名直接访问</font>公有静态成员变量
  - <font color=purple>所有对象共享类的静态成员变量</font>
  - 可以<font color=MediumTurquoise>通过对象名访问</font>公有静态成员变量
- 静态成员变量的特性
  - 在定义时直接通过<font color=blue>static</font>关键字修饰
  - 静态成员变量<font color=red>需要再类外单独分配空间</font>
  - 静态成员变量在程序的内部<font color=blue>位于全局数据区</font>
- 语法规则：
  <font color=Fuchsia>Type</font> ClassName::VarName = <font color=red>value</font>；

## 小结
- 类中可以通过<font color=blue>static</font>关键字定义<font color=red>静态成员变量</font>
- 静态成员变量<font color=Fuchsia>隶属于类所有</font>
- 每一个对象都可以访问静态成员变量
- 静态成员变量<font color=green>在全局数据区分配空间</font>
- 静态成员变量的<font color=blue>生命期为程序运行期</font>