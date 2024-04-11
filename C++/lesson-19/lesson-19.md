# 对象的构造(下)
## 特殊的构造函数
- 两个<font color=deeppink>特殊的</font>构造函数
  - 无参构造函数
    - <font color=Fuchsia>没有参数的</font>构造函数
    - 当类中没有定义构造函数时，<font color=Fuchsia>编译器默认提供一个无参构造函数</font>，并且其函数体为空
  - <font color=red>拷贝构造函数</font>
    - 参数为<font color=blue>const</font> class_name&的构造函数
    - 当类中没有定义拷贝构造函数时，<font color=blue>编译器默认提供一个拷贝构造函数</font>，<font color=deeppink>简单的进行成员变量的值复制</font>
  
## 拷贝构造函数
- 拷贝构造函数的意义
  - <font color=red>兼容C语言的初始化方式</font>
  - <font color=purple>初始化行为能否符合预期的逻辑</font>
  - <font color=Fuchsia>浅拷贝</font>
    - 拷贝后对象的物理状态相同
  - <font color=red>深拷贝</font>
    - <font color=green>拷贝后对象的逻辑状态相同</font>
      <font color=blue>编译器提供的拷贝构造函数只进行浅拷贝！</font>
  - <font color=Fuchsia>什么时候</font>需要进行<font color=red>深拷贝</font>？
    - 对象中有<font color=blue>成员指代</font>了系统中的<font color=brown>资源</font>
      - 成员指向了动态内存空间
      - <font color=orange>成员打开了外存中的文件</font>
      - <font color=purple>成员使用了系统中的网络端口</font>
      - ......
  - 问题分析
  
    ![Alt text](image.png)
  - 一般性原则
    - <font color=red>自定义拷贝构造函数</font>，<font color=Fuchsia>必然需要实现深拷贝！！！</font>

## 小结
- C++编译器会<font color=blue>默认提供构造函数</font>
- <font color=red>无参构造函数</font>用于定义对象的默认初始状态
- <font color=purple>拷贝构造函数</font>在创建对象时<font color=Fuchsia>拷贝对象的状态</font>
- 对象的拷贝有<font color=blue>浅拷贝</font>和<font color=deeppink>深拷贝</font>两种方式
  - <font color=orange>浅拷贝使得对象的物理状态相同</font>
  - <font color=green>深拷贝使得对象的逻辑状态相同</font>