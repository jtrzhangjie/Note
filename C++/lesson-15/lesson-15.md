# 类与封装的概念
## 类的封装
- 类通常分为以下<font color=blue>两个</font>部分
  - 类的<font color=red>实现细节</font>
  - 类的<font color=DeepPink>使用方式</font>
  
  ![Alt text](image.png)

- 当<font color=blue>使用类</font>时，<font color=Fuchsia>不需要关心</font>其实现细节
- 当<font color=red>创建类</font>时，<font color=purple>才需要考虑</font>其内部实现细节
- <font color=blue>封装</font>的基本概念
  - 根据经验：<font color=red>并不是类的每个属性都是对外公开的</font>
    - <font color=purple>如：女孩子不希望外人知道自己的体重和年龄</font>
    - <font color=purple>如：男孩子不希望比尔呢知道自己的身高和收入</font>
  - <font color=Fuchsia>而一些类的属性是对外公开的</font>
    - <font color=MediumTurquoise>如：人的姓名，学历，国籍等</font>
  - <font color=red>必须</font>在类的表示法中<font color=deeppink>定义属性和行为的公开级别</font>
    - <font color=green>类似文件系统中文件的权限</font>
- C++中类的封装
  - 成员变量：<font color=red>C++中用于表示类属性的变量</font>
  - 成员函数：<font color=blue>C++中用于表示类行为的函数</font>
  - C++中可以给<font color=red>成员变量</font>和<font color=purple>成员函数</font>定义<font color=blue>访问级别</font>
    - <font color=blue>public: </font>
      - [x] 成员变量和成员函数可以在类的内部和外界访问和调用
    - <font color=blue>private: </font>
      - [x] 成员变量和成员函数<font color=deeppink>只能在类的内部被访问和调用</font>

## 类成员的作用域
- 类成员的作用域都<font color=blue>只在类的内部</font>，<font color=deeppink>外部无法直接访问</font>
- <font color=red>成员函数</font>可以直接<font color=green>访问成员变量</font>和<font color=blue>调用成员函数</font>
- 类的外部可以<font color=Fuchsia>通过类变量访问<font color=blue>public</font>成员</font>
- 类成员的作用域与访问级别没有关系
        C++中<font color=blue>struct</font>定义的类中所有成员<font color=deeppink>默认</font>为<font color=blue>public</font>
## 小结
- 类通常可以分为<font color=Fuchsia>使用方法</font>和<font color=red>内部细节</font>两部分
- 类的<font color=blue>封装机制</font>使得<font color=green>使用方法</font>和<font color=green>内部细节</font>相分离
- C++中通过定义类成员的<font color=purple>访问级别实现封装机制</font>
- <font color=blue>public</font>成员可以在<font color=deeppink>类的内部和外界访问和调用</font>
- <font color=blue>private</font>成员只能在类的内部被访问和调用