# 类模板深度剖析
## 多参数类模板
- 类模板可以定义<font color=blue>任意多个不同的类型参数</font>
  
  ![Alt text](image.png)

- 类模板可以被特化
  - 指定类模板的<font color=blue>特定实现</font>
  - <font color=deeppink>部分类型参数</font>必须显示指定
  - 根据类型参数<font color=purple>分开实现类模板</font>
  
  ![Alt text](image-1.png)

- 类模板的特化类型
  - <font color=deeppink>部分特化</font> - 用特定规则约束类型参数
  - <font color=blue>完全特化</font> - 完全显示指定类型参数
  
  ![Alt text](image-2.png)

- 类模板特化注意事项
  - 特化只是<font color=blue>模板的分开实现</font>
    - 本质上是同一个类模板
  - 特化类模板的<font color=blue>使用方式是统一的</font>
    - 必须显示指定每一个类型参数
  
## 特化的深度分析
- 重定义和特化的不同
  - <font color=blue>重定义</font>
    - 一个类模板和一个新类(或者两个类模板)
    - 使用的时候需要<font color=blue>考虑如何选择的问题</font>
- <font color=blue>特化</font>
    - 以统一的方式使用类模板和特化类
    - 编译器<font color=deeppink>自动优先选择特化类</font>
- 函数模板只支持类型参数完全特化
  
  ![Alt text](image-3.png)

## 工程中的建议
当需要重载函数模板时，<font color=blue>优先考虑使用模板特化</font>
<font color=deeppink>当模板特化无法满足要求</font>，再使用函数重载

## 小结
- 类模板可以定义<font color=blue>任意多个不同的类型参数</font>
- 类模板可以被<font color=red>部分特化</font>和<font color=fuchsia>完全特化</font>
- 特化的本质是<font color=blue>模板的分开实现</font>
- 函数模板只支持完全特化
- 工程中使用<font color=deeppink>模板特化代替类(函数)重定义</font>