# 神秘的临时对象
## 有趣的问题
- 下面的程序输出是什么？<font color=blue>为什么？</font>
  
  ![Alt text](image.png)

## 发生了什么？
- 程序意图：
  - 在Test()中以0作为参数调用Test(int i)
  - 将成员变量mi的初始值设置为0
- 运行结果：
  - <font color=blue>成员变量mi的值为随机值</font>
  
## 思考
- <font color=blue>构造函数</font>是一个特殊的函数
  - 是否可以<font color=red>直接调用</font>？
  - 是否可以在<font color=purple>构造函数中调用构造函数？</font>
  - <font color=Fuchsia>直接调用构造函数的行为是什么？</font>
  
## 答案
- 直接调用构造函数将产生一个<font color=blue>临时对象</font>
- 临时对象的<font color=MediumTurquoise>生命周期只有一条语句的时间</font>
- 临时对象的<font color=Fuchsia>作用域只在一条语句中</font>
- 临时对象时C++中<font color=deeppink>值得警惕</font>的灰色地带
  
## 编译器的行为 
现代C++编译器在<font color=blue>不影响最终执行结果的前提下</font>，<font color=deeppink>会尽力减少临时对象的产生！！！</font>

## 小结
- 直接调用构造函数将产生一个<font color=blue>临时对象</font>
- 临时对象是<font color=red>性能的瓶颈</font>，也是<font color=Fuchsia>bug的来源</font>之一
- 现代C++编译器会尽力<font color=deeppink>避开临时对象</font>
- 实际工程开发中需要认为的<font color=Fuchsia>避开临时对象</font>