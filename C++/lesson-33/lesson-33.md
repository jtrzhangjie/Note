# C++中的字符串类
## 历史遗留问题
- C语言<font color=red>不支持</font>真正意义上的<font color=Fuchsia>字符串</font>
- C语言用<font color=red>字符数组</font>和<font color=MediumTurquoise>一组函数</font>实现字符串操作
- C语言<font color=red>不支持</font>自定义类型，因此<font color=blue>无法获得字符串类型</font>
  
## 解决方案
- 从C到C++的进化过程引入<font color=blue>自定义类型</font>
- 在C++中可以<font color=red>通过类完成字符串类型的定义</font>
  
## 标准库中的字符串类
- C++语言<font color=blue>直接支持</font>C语言的所有概念
- C++语言中<font color=deeppink>没有原生的字符串类型</font>
- C++标准库提供了string类型
  - string直接支持<font color=purple>字符串连接</font>
  - string直接支持<font color=red>字符串大小比较</font>
  - string直接支持<font color=Fuchsia>子串查找和提取</font>
  - string直接支持<font color=orange>字符串的插入和替换</font>
- <font color=blue>字符串</font>与<font color=Fuchsia>数字</font>的转换
  - 标准库中提供了<font color=red>相关的类</font>对字符串和数字进行转换
  - 字符串流类(<font color=purple>sstream</font>)用于string的转换
    - \<sstream\> - 相关头文件
    - istringstream - 字符输入流
    - ostringstream - 字符输出流
- 使用方法
  - <font color=blue>string -> 数字</font>
  
  ![Alt text](image.png)

  - <font color=Fuchsia>数字 -> string</font>
  
  ![Alt text](image-1.png)

## 小结
- 应用开发中<font color=red>大多数情况</font>都在进行<font color=blue>字符串处理</font>
- C++中<font color=deeppink>没有直接支持</font>原生的字符串类型
- 标准库中通过<font color=blue>string</font>类支持字符串的概念
- string类支持<font color=Fuchsia>字符串</font>和<font color=purple>数字</font>的相互转换
- string类的应用是的问题的求解变得简单