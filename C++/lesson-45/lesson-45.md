# 不同的继承方式
## 不同的继承方式
- C++中支持三种不同的继承方式
  - <font color=blue>public</font>继承
    - 父类成员在子类中<font color=blue>保持原有的访问级别</font>
  - <font color=red>private</font>继承
    - 父类成员在子类中<font color=red>变为私有成员</font>
  - <font color=Fuchsia>protected</font>继承
    - 父类中<font color=Fuchsia>公有成员变为保护成员</font>，其他成员保持不变
  
![Alt text](image.png)

## 遗憾的事实
- 一般而言，C++工程项目中<font color=blue>只使用public继承</font>
- <font color=red>C++的派生语言只支持一种继承方式</font>(public继承)
- <font color=Fuchsia>protected</font>和<font color=Fuchsia>private</font>继承带来的<font color=purple>复杂性远大于实用性</font>

## 小结
- C++中支持<font color=red>3</font>种不同的<font color=blue>继承方式</font>
- 继承方式直接影响父类成员在子类中的访问属性
- 一般而言，工程中<font color=red>只使用public</font>的继承方式
- <font color=Fuchsia>C++的派生语言中只支持public继承方式</font>