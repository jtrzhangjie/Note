# 二阶构造模式
## 构造函数的回顾
- 关于构造函数
  - 类的<font color=blue>构造函数</font>用于对象的<font color=deeppink>初始化</font>
  - 构造函数<font color=purple>与类同名并且没有返回值</font>
  - 构造函数在对象定义时<font color=green>自动被调用</font>
  
## 你该知道的真相
- 构造函数
  - <font color=deeppink>只提供</font>自动初始化成员变量的机会
  - <font color=red>不能保证</font>初始化逻辑一定成功
  - 执行<font color=blue>return</font>语句后<font color=Fuchsia>构造函数立即结束</font>
  构造函数能决定的<font color=red>只是对象的初始状态</font>，<font color=blue>而不是对象的诞生</font>

## 半成品对象
- <font color=blue>半成品对象</font>的概念
  - <font color=red>初始化操作不能按照预期完成而得到的对象</font>
  - 半成品对象时<font color=Fuchsia>合法的C++对象</font>，也是<font color=deeppink>bug的重要来源</font>
  
## 二阶构造
- 工程开发中的<font color=blue>构造过程</font>可分为
  - <font color=red>资源无关的</font>初始化操作
    - 不可能出现异常情况的操作
  - 需要<font color=Fuchsia>使用系统资源的</font>操作
    - 可能出现异常情况，如<font color=purple>内存申请，访问文件等</font>
  
  ![Alt text](image.png)

- 二阶构造示例一
  
  ![Alt text](image-1.png)

- 二阶构造示例二
  
  ![Alt text](image-2.png)

## 小结
- 构造函数<font color=red>只能决定对象的初始化状态</font>
- 构造函数中<font color=purple>初始化操作的失败不影响对象的诞生</font>
- 初始化不完全的<font color=Fuchsia>半成品对象是bug的重要来源</font>
- 二阶构造人为的将初始化过程分为两部分
- <font color=blue>二阶构造</font>能够确保创建的<font color=blue>对象都是完整初始化的</font>