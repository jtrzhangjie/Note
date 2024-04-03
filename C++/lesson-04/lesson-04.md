# 布尔类型和引用
## 布尔类型
- C++中的布尔类型
  - C++在C语言的<font color=Crimson>基本类型</font>系统上增加了<font color=blue>bool</font>
  - C++中的<font color=blue>bool</font>可取的值只有<font color=blue>true</font>和<font color=blue>false</font>
  - 理论上<font color=blue>bool</font>只占用<font color=Fuchsia>一个字节</font>
  <font color=blue>注意</font>：
  <font color=blue>true</font>代表<font color=blue>真值</font>，编译器内部用<font color=Crimson>1</font>来表示
  <font color=blue>false</font>代表<font color=blue>非真值</font>，编译器内部用<font color=Crimson>0</font>来表示 
- <font color=blue>bool</font>类型只有<font color=blue>true</font>(<font color=Crimson>非0</font>)和<font color=blue>false</font>(<font color=Crimson>0</font>)两个值
- C++编译器会将<font color=Fuchsia>非0值</font>转换为<strong style="color: Fuchsia;">true</strong>
- 布尔类型是C++中的基本数据类型
  - 可以定义<font color=blue>bool</font>类型的<font color=Crimson>全局变量</font>
  - 可以定义<font color=blue>bool</font>类型的<font color=DimGray>常量</font>
  - 可以定义<font color=blue>bool</font>类型的<font color=DarkViolet>指针</font>
  - 可以定义<font color=blue>bool</font>类型的<font color=DarkSlateBlue>数组</font>
  - 。。。

## 三目运算符
- C++对<font color=blue>三目运算符</font>进行了<font color=Crimson>升级</font>
- <font color=red>C语言中</font>的三目运算符返回的是<strong style="color: Fuchsia;">变量值</strong>
  - <font color=red>不能</font>作为左值使用
- <font color=red>C++</font>中的三目运算符可直接返回<strong style="color: Fuchsia;">变量本身</strong>
  - 既可作为<font color=DarkSeaGreen>右值</font>使用，又可作为<font color=DarkSeaGreen>左值</font>使用
  <font color=blue>注意：
  三目运算符可能返回的值中如果有一个是常量值，则不能作为左值使用
  </font>

## C++中的引用
- 变量名回顾
  - <font color=blue>变量</font>是一段实际连续<font color=red>存储空间的别名</font>
  - 程序中通过<font color=DeepSkyBlue>变量</font>来申请并<font color=Fuchsia>命名存储空间</font>
  - 通过<font color=Orange>变量</font>的名字可以使用存储空间
<div align=center>
<img src="image.png"/> 
</div>

- 在C++中新增加了<font color=blue>引用</font>的概念
  - <font color=red>引用</font>可以看做一个已定义<font color=Fuchsia>变量的别名</font>
  - 引用的语法：<font color=blue>Type</font><font color=red>&</font> name = var;
  <font color=red>注意：
  普通引用在<font color=blue>定义时</font>必须<font color=blue>用同类型的变量进行初始化。</font>
  </font>
- C++对三目运算符做了什么？
  - 当三目运算符的<font color=blue>可能返回都是变量时</font>，<font color=red>返回的是变量的引用</font>
  - 当三目运算符的<font color=PowderBlue>可能返回中有常量时</font>，<font color=Fuchsia>返回的是值</font>

## 小结
- <font color=blue>bool</font>类型是C++新增加的<font color=red>基础类型</font>
- <font color=blue>bool</font>类型的值只能是<font color=blue>true</font>和<font color=blue>false</font> 
- C++中的三目运算符<font color=Fuchsia>可作为左值使用</font>
- C++中的引用可以看做变量的别名来使用
- 三目运算符的<font color=blue>可能返回都是变量时</font>，<font color=red>返回的是引用</font> 
