# 进化后的const分析
## C语言中的const
- <span style="color:blue;">const</span>修饰的变量是<span style="color:red;">只读的</span>，本质还是<span style="color:purple;">变量</span>
- <span style="color:blue;">const</span>修饰的<span style="color:maroon;">局部变量在栈上分配空间</span>
- <span style="color:blue;">const</span>修饰的<span style="color:fuchsia;">全局变量在只读存储区分配空间</span>
- <span style="color:blue;">const</span>只在<span style="color:teal;">编译器有用</span>，在<span style="color:teal;">运行期无用</span>
  <span style="color:blue;">const</span><span style="color:red;">修饰的变量不是真的常量，它只是告诉编译器该变量不能出现在赋值符号的左边</span>

- C语言中的<span style="color:blue;">const</span>使得变量具有<span style="color:blue;">只读属性</span>
- <span style="color:blue;">const</span>将具有全局生命周期的变量存储于只读存储区
  <span style="color:blue;">const</span><span style="color:red;">不能定义真正意义上的常量！</span>

## C++中的const
- C++在C的基础上对<span style="color:blue;">const</span>进行了<span style="color:blue;">进化处理</span>
  - 当碰见<span style="color:blue;">const</span>声明时<span style="color:red;">在符号表中放入常量</span>
  - 编译过程中若发现使用常量则<span style="color:fuchsia;">直接以符号表中的值替换</span>
  - 编译过程中若发现下述情况则给对应的常量分配存储空间
    - 对<span style="color:blue;">const</span>常量使用了<span style="color:blue;">extern</span>
    - 对<span style="color:blue;">const</span>常量使用<span style="color:red;">&</span>操作符
    <span style="color:red;">注意：
    C++编译器虽然可能为const常量分配空间，但不会使用其存储空间中的值</span>
<div align=center>
<img src="image.png"/> 
</div>

- C语言中的<span style="color:blue;">const</span>变量
  - C语言中的<span style="color:blue;">const</span>变量是<span style="color:red;">只读变量</span>，会<span style="color:purple;">分配存储空间</span>
- C++中的<span style="color:blue;">const</span>常量
  - <span style="color:maroon;">可能会分配存储空间</span>
    - 当<span style="color:blue;">const</span>常量为全局，并且<span style="color:fuchsia;">需要再其他文件中使用</span>
    - 当使用<span style="color:fuchsia;">&</span>操作符对<span style="color:blue;">const</span>常量取地址
- C++中的<span style="color:blue;">const</span>常量<span style="color:red;">类似于</span>宏定义
  - <span style="color:blue;">const int</span> c = <span style="color:brown;">5</span>; ≈ <span style="color:blue;">#define</span> c <span style="color:brown;">5</span>
- C++中的<span style="color:blue;">const</span>常量在<span style="color:red;">与宏定义不同</span>
  - <span style="color:blue;">const</span>常量是由<span style="color:red;">编译器处理</span>
  - 编译器对<span style="color:blue;">const</span>常量进行<span style="color:purple;">类型检查</span>和<span style="color:fuchsia;">作用域检查</span>
  - 宏定义由预处理器处理，单纯的文本替换

## 小结
- 与C语言不通，C++中的<span style="color:blue;">const</span><span style="color:red;">不是只读变量</span>
- C++中的<span style="color:blue;">const</span>是一个<span style="color:fuchsia;">真正意义上的常量</span>
- C++编译器<span style="color:purple;">可能</span>会为<span style="color:blue;">const</span>常量分配空间
- C++完全兼容C语言中<span style="color:blue;">const</span>常量的<span style="color:teal;">语法特性</span>