# 数组类模板
## 预备知识
- 模板参数可以是数值型参数(非类型参数)
  
  ![Alt text](image.png)

- 数值型模板参数的限制
  - <font color=red>变量</font>不能作为模板参数
  - <font color=red>浮点数</font>不能作为模板参数
  - <font color=red>类对象</font>不能作为模板参数
  - ...
  
  本质：
  模板参数是<font color=blue>在编译阶段被处理</font>的单元，因此，<font color=deeppink>在编译阶段必须准确无误的唯一确定</font>

## 有趣的面试题
用你觉得<font color=fuchsia>最高效</font>的方法求<font color=blue>1+2+3+…+N</font>的值!

## 小结
- 模板参数可以是<font color=blue>数值型参数</font>
- 数值型模板参数<font color=deeppink>必须在编译期间唯一确定</font>
- <font color=red>数组类模板</font>是基于数值型模板参数实现的
- 数组类模板是简易的<font color=red>线性表数据结构</font>