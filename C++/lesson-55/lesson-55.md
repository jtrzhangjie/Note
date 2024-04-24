# 经典问题解析四
## 关于动态内存分配
- <font color=blue>new</font>关键字与<font color=deeppink>malloc</font>函数的区别
  - <font color=blue>new</font>关键字是<font color=blue>C++的一部分</font>
  - <font color=deeppink>malloc</font>是由C库提供的函数
  - <font color=blue>new</font>以具体<font color=blue>类型位单位</font>进行内存分配
  - <font color=deeppink>malloc</font>以字节位单位进行内存分配
  - <font color=blue>new</font>在申请内存空间时可进行初始化
  - <font color=deeppink>malloc</font>仅根据需要申请定量的内存空间
  - new在<font color=blue>所有C++编译器中都被支持</font>
  - malloc在某些系统开发中是不能调用
  - new能够<font color=blue>触发构造函数的</font>调用
  - malloc仅分配需要的内存空间
  - <font color=blue>对象的创建只能使用new</font>
  - malloc<font color=deeppink>不适合面向对象开发</font>
- <font color=blue>delete</font>和<font color=deeppink>free</font>的区别
  - delete在<font color=blue>所有C++编译器中都被支持</font>
  - free在某些系统开发中是不能调用
  - delete能够<font color=blue>触发析构函数</font>的调用
  - free仅归还之前分配的内存空间
  - <font color=blue>对象的销毁只能使用delete</font>
  - free<font color=deeppink>不适合面向对象开发</font>
  
## 关于虚函数

![Alt text](image.png)

- 构造函数<font color=deeppink>不可能</font>成为虚函数
  - <font color=fuchsia>在构造函数执行结束后</font>，虚函数表指针才会被正确的初始化
- 析构函数<font color=blue>可以</font>成为虚函数
  - 建议在设计类时<font color=red>将析构函数声明为虚函数</font>
  
![Alt text](image-1.png)
- 构造函数中<font color=blue>不可能</font>发生多态行为
  - <font color=red>在构造函数执行时</font>，虚函数表指针未被正确初始化
- 析构函数中<font color=deeppink>不可能</font>发生多态行为
  - <font color=red>在析构函数执行时</font>，虚函数表指针已被销毁
  构造函数和析构函数中<font color=blue>不可能发生多态行为</font>，<font color=blue>只调用当前类中定义的函数版本</font>

## 关于继承中的强制类型转换
继承中如何<font color=blue>正确的</font>使用<font color=fuchsia>强制类型转换</font>？
- <font color=blue>dynamic_cast</font>是与<font color=deeppink>继承相关</font>的类型转换关键字
- <font color=blue>dynamic_cast</font>要求相关的类中<font color=deeppink>必须有虚函数</font>
- 用于有直接或者间接<font color=blue>继承关系</font>的<font color=red>指针</font>(<font color=fuchsia>引用</font>)之间
  - 指针：
    - 转换成功：<font color=blue>得到目标类型的指针</font>
    - 转换失败：<font color=red>得到一个空指针</font>
  - 引用：
    - 转换成功：<font color=blue>得到目标类型的指针</font>
    - 转换失败：<font color=red>得到一个异常操作信息</font>
- 编译器会检查<font color=blue>dynamic_cast</font>的使用是否正确
- 类型转换的<font color=deeppink>结果只可能在运行阶段才能得到</font>

## 小结
- <font color=blue>new</font>/<font color=blue>delete</font>会触发<font color=blue>构造函数</font>和<font color=blue>析构函数</font>的调用
- 构造函数<font color=deeppink>不能</font>成为虚函数
- 析构函数<font color=deeppink>可以</font>成为虚函数
- <font color=red>构造函数</font>和<font color=red>析构函数</font>中都<font color=blue>无法产生多态行为</font>
- <font color=blue>dynamic_cast</font>是与<font color=blue>继承相关</font>的专用转换关键字