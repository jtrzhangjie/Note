# 新型的类型转换
## 强制类型转换
- C方式的强制类型转换
  
  ![Alt text](image.png)

- C方式强制类型转换存在的问题
  - <font color=DeepPink>过于粗暴</font>
    - <font color=purple>任意类型之间都可以进行转换</font>，编译器很难判断其正确性
  - <font color=DeepPink>难于定位</font>
    - 在源码中无法快速定位所有使用强制类型转换的语句

## 新式类型转换
- C++将强制类型转换分为<font color=blue>4</font>种不同类型
  
  ![Alt text](image-1.png)

- <font color=blue>static_case</font>强制类型转换
  - 用于<font color=Fuchsia>基本类型</font>间的转换
  - <font color=red>不能</font>用于<font color=purple>基本类型指针</font>间的转换
  - 用于<font color=red>有继承关系类对象</font>之间的转换和<font color=MediumTurquoise>类指针</font>之间的转换
- <font color=blue>const_case</font>强制类型转换
  - 用于<font color=Fuchsia>去除</font>变量的<font color=red>只读属性</font>
  - 强制转换的<font color=blue>目标类型</font>必须是<font color=purple>指针</font>或<font color=PowderBlue>引用</font>
- <font color=blue>reinterpret_case</font>强制类型转换
  - 用于<font color=Fuchsia>指针类型间</font>的强制转换
  - 用于<font color=MediumTurquoise>整数</font>和<font color=purple>指针类型</font>间的强制转换
- <font color=Pink>dynamic_case</font>强制类型转换
  - 用于<font color=blue>有继承关系的类指针</font>间的转换
  - 用于<font color=Fuchsia>有交叉关系的类指针</font>间的转换
  - 具有<font color=MediumTurquoise>类型检查</font>的功能
  - <font color=red>需要虚函数的支持</font>

## 小结
- C方式的强制类型转换
  - <font color=red>过于粗暴</font>
  - <font color=red>潜在的问题不易被发现</font>
  - <font color=red>不易在代码中定位</font>
- 新式类型转换以C++<font color=blue>关键字</font>的方式出现
  - <font color=green>编译器能够帮助检查潜在的问题</font>
  - <font color=green>非常方便的在代码中定位</font>
  - <font color=green>支持动态类型识别</font>(<font color=pink>dynamic_cast</font>)