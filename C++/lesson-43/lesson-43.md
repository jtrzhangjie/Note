# 继承的概念和意义
## 类之间的组合关系
- 组合关系的特点
  - 将<font color=red>其他类的对象</font>作为<font color=red>当前类的成员</font>使用
  - 当前类的对象与成员对象的<font color=purple>生命期相同</font>
  - 成员对象在<font color=MediumTurquoise>用法上</font>与普通对象<font color=MediumTurquoise>完全一致</font>
  
## 惊艳的继承
- 面相对象中的<font color=blue>继承</font>指类之间的<font color=red>父子关系</font>
  - 子类拥有父类的<font color=Fuchsia>所有属性和行为</font>
  - 子类就是一种特殊的父类
  - <font color=orange>子类对象可以当做父类对象使用</font>
  - 子类中可以<font color=green>添加父类没有的</font>方法和属性
- C++中通过下面的方式描述继承关系
  
  ![Alt text](image.png)

- <font color=blue>重要准则</font>
  - 子类就是一个<font color=red>特殊的父类</font>
  - 子类对象可以<font color=purple>直接初始化</font>父类对象
  - 子类对象可以<font color=Fuchsia>直接赋值给</font>父类对象

## 继承的意义
继承是C++中<font color=Fuchsia>代码复用</font>的重要手段。通过<font color=red>继承</font>，可以<font color=blue>获得父类的所有功能</font>，并且可以在子类中重写已有的功能，或者添加新的功能

## 小结
- 继承是面相对象中<font color=blue>类之间的一种关系</font>
- 子类拥有父类的<font color=Fuchsia>所有属性和行为</font>
- 子类对象可以当做父类对象使用
- 子类中可以<font color=green>添加父类没有的</font>方法和属性
- 继承是面向对象中<font color=deeppink>代码复用的重要手段</font>