# 智能指针类模板
## 智能指针
- <font color=blue>智能指针</font>的意义
  - 现代C++开发库中<font color=deeppink>最重要的类模板之一</font>
  - C++中<font color=fuchsia>自动内存管理</font>的主要手段
  - 能够在<font color=purple>很大程度上</font>避开内存相关的问题
- STL中的智能指针<font color=blue>auto_ptr</font>
  - <font color=red>生命周期结束时</font>，销毁指向的内存空间
  - 不能指向堆数组，<font color=blue>只能指向堆对象(变量)</font>
  - 一片堆空间只属于一个智能指针对向
  - 多个智能指针对象<font color=deeppink>不能指向同一片堆空间</font>
- STL中的其他智能指针
  - shared_ptr
    - 带有引用计数机制，支持多个指针对象指向同一片内存
  - wear_ptr
    - 配合shared_ptr而引入的一种智能指针
  - unique_ptr
    - 一个指针对象指向一片内存空间，不能拷贝构造和赋值
- Qt中的智能指针
  - <font color=blue>QPointer</font>
    - 当其指向的对象被销毁时，它会被自动置空
    - 析构时不会自动销毁所指向的对象
  - <font color=blue>QSharedPointer</font>
    - <font color=blue>引入计数型智能指针</font>
    - <font color=blue>可以被自由的拷贝和赋值</font>
    - <font color=blue>当引用计数为0时才删除指向的对象</font>
- Qt中的其他智能指针
  - QWeakPointer
  - QScopedPointer
  - QScopedArrayPointer
  - QSharedDataPointer
  - QExplicitlySharedDataPointer
  
## 小结
- 智能指针是C++中<font color=blue>自动内存管理</font>的主要手段
- 智能指针在各种平台上都有不同的表现形式
- 智能指针能够<font color=fuchsia>尽可能的避开</font>内存相关的问题
- <font color=red>STL和Qt中都提供了对智能指针的支持</font>