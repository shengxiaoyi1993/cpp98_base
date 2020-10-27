# ReadFirst

- 由容器、迭代器、算法构成
- 数据和操作分离。任何算法可与任何迭代器交互运作
- STL中所有组件可以针对任意性别运作

## containers
1. sequence containers
  - vector/deque/list
  - orider in store is same as push orider

### vector
  - add or remove in end is fast,but in head or in mid is slow

### deque
  - add or remove in head or end is fast ,but in mid is slow
  - double-ended queue

### list
  - double-link-list
  - add or remove at any location is fast
  - do not provide function to visit elememt of certain location (x[])

### string
  - like vector

### array
  - STL support array






2. associative containers
  - orider in store is determined by element, and is not relative with push orider
  - set,multiset,map,multimap
  - has certain orider regulation,orider automatically
  - generally by binary tree

### set
  - elememt just can be appear once
### multiset
  - repeat element is allowed
### maps
  - key/value values,repeat element is not allowed

### multimap
  - key/value values,repeat element is allowed


3. container adapters
  - for concete use
### stack
  - lifo
### queues
  - fifo
### priority queues
  - differennt element has different priority
  - orider by self defned regulation

## iterator
  - *
  - ++
  - == /!=
  - =
  - begin()
  - end()
  - all containers has two typies of iterators
    - container::iterator        changable
    - conatiner::const_iterator  readonly
  - pre-increment/pre-decrement should be better

  5.3.2 iterator categories
  - bidirectional iterator
    - list,set,multiset,map,multimap
  - random access iterator
    - compare operator (<,>)
    - vector,string,deque
    - avoid to use for wide use

## 5.4 algorithms
  - range
  - insert interator
    - back_inserter
    - front_inserter
    - inserter
  - stream iterators

  - reverse iterators

## 5.6 manipulating algorithms

## 5.8 function as params
### 5.8.1 example
- std::transform
### 5.8.2 predictes
- Unary predictes
  - find_if
- Binary predictes
  - sort()

## 5.9 Functors,Function Objects
- as params of algorithms
- when normal function can not work
- define operator () and you can use this class as function
- features
  - smart functions:has member val and func,state
  - has its own type
  - faster

## 5.10 elements of container
### 5.10.1 condition
- 必须可通过copy构造函数进行复制
- 必须可通过asignment进行赋值
- 必须可通过析构函数进行销毁

### 5.10.2 value & reference
- stl 支持value语义
- 使用引用时注意reference指向的对象健在；警惕偶尔出现的循环引用
- 使用引用时可以用指针代替，指针作为容器元素；但是不要用智能指针auto_ptr，因为一经使用就会销毁

## 5.11 STL内部的错误处理和异常机制
- 逻辑性错误
- 执行器错误
### 5.11.1 Error handling:效率优先，安全次之
- 要求
  - 迭代器合法有效，如正常初始化。注意迭代器因可能因某些操作而失效
  - 迭代器的逾尾位置“past-to-end”不指向任何元素
  - 区间必须是合法，从第一个迭代器出发能够到达第二个元素
  - 若涉及区间不止一个，则第一个区间的元素数量多于后面的
  - 覆盖动作的区间需要有足够多的数量，否则使用插入操作


# 6 STL container
>数据结构，操作性能和操作的应用

### 6.1 容器的共通能力和共通性能
#### 6.1.1 共通能力
- values而非refernce
- 形成一个次序，可遍历
- 各项操作非绝对安全。输入参数的准确性需要操作着保证（高效为原则）
#### 6.1.2 共通操作
- 初始化
  - 提供default构造函数，copy构造函数和析构函数
  - 支持`member templates`,若提供从来源端到目标端的元素型别自动转换，不光容器型别可以不同，元素型别也可以不同
- 与size相关
  - size()
  - empty()
  - max_size()
- 比较
  - 符号：==,!=,>,<,>=,<=
  - 规则
    - 操作两端的容器型别相同
    - 容器的元素依序相同，那么两个容器相同
    - 字典式顺序来比较两个容器的大小
- 赋值
  - swap()效率比容器赋值要高，元素，配置器，交换准则都会被交换，时间复杂度为`常数`

## 6.2 Vectors
- 头文件 <vector>
- 元素可以是任何元素，但必须具备assignable 和copyable两个性质
- 第二个参数是内存模型，缺省使用c++标准库提供的allocator
### 6.2.1 Vectors能力
- 将元素复制到内部的动态数组中
- 有序集群
- 支持随机存取，常数时间访问任何一个元素
- 支持任何一个STL算法
- 末端增加或删除元素性能好，但是在前端或者中部性能较差，因为每个元素都需要转移（assign）
- 大小和容量
  - 使用时应配置比其所容纳的元素所需更多的内存
  - 元素超过能容纳的元素，就会重新配置内部存储器
  - 内部存储器重新配置，元素相关的references,pointers,iterators都会失效

### 6.2.2 Vector 的操作函数
- 构造，拷贝和解构
- 非变动性操作
- 元素存取
- 迭代器相关函数
- 安插和移除操作
  - 迭代器指向合法位置
  - 区间的起始位置不能在结束位置之后
  - 不能从空容器中移除元素

### 6.2.3 Vector 用作数组
### 6.2.4 Exception Handling
- 只有at()唯一被要求检查错误，抛出异常
- 保证（<析构函数不抛出异常）
  - push_back()发生异常，该函数不起作用
  - insert()要么成功，要么不生效用：若元素拷贝函数不抛出异常
  - pop_back()绝不抛出任何异常
  - erase()和clear()不抛出异常<元素拷贝操作不抛出异常
  - swap()不抛出异常
  - POD（plain old data）,无c++特性的型别。若元素拷贝操作（copy构造函数和assignment操作符）不抛出异常，那么所有操作不是成功，就是不起作用

### 6.2.5 Vector实例
- remove 将移除元素后面的元素全都往前一格，输出无效数据，此时用erase()删除无效数据区间就能达到删除指定元素的效果
- find() 输出目标元素的迭代器位置，若使用查找区间起始位置移到找到的区间之后，就能时先循环查找出所有元素

### 6.2.6 class vector<bool>
- vector的特殊实现
- 只用1个bit存储一个元素
- 但是c++的寻址通常以byte为单位，因此无法满足所有其他vector的特性
  - reference不能返回真正的lvalue
  - 具有动态大小的位域，若需要静态大小的位域应当使用bitset
2
## 6.3 Deque
- 类似与vector，内部使用动态数据
- 头尾部都开放
  - 内部使用一组独立区块实现，第一个区块和最后的区块向不同方向拓展
- 第二个参数是内存模型，缺省使用c++标准库提供的allocator
### 6.3.1 Deque能力
- 与vector的差别
  - Deque两端都能快速安插元素和移除元素
  - 存取元素时,deque会多一个间接过程,因此会慢一点
  - 迭代器用的指针是特殊的智能型指针
  - 在非头尾两端的的任何其他地方插入或删除元素都会导致指向deque元素的任何pointers,references,iterators失效。但内存重分配效率高于vectors

### 6.3.2 Deque操作函数
  - 同vector
  - 不提供capacity(),reserve()
  - 提供push_back(),push_front()
  1
### 6.3.3 异常处理
  - push_back() push_front()插入元素时发生异常时，该操作不带来任何效应，且不抛出异常

## 6.4 Lists
- 双向链表
### 6.4.1 Lists的能力
- 不支持随机存取，遍历元素速度慢
- 插入或移除元素速度快
- 插入或移除元素不会导致pointers references iterators 失效
- 操作要么成功要么没有影响
### 6.4.2 操作函数
- 生成，复制，销毁
- 非变动性操作
- 赋值
- 元素存取
  - front()
  - back()
- insert remove
  - 同时对多个元素进操作比一一操作效率更高
  - 尽量调用成员函数，remove(),remove_if()

- splice
  - unique() 去重
  - splice() 转移
  - sort()   排序
  - merage() 有序合并
  - reverse() 反序


### 6.4.3 Exception Handling
- 除了sort()与赋值,要么成功要么无效
<<<<<<< HEAD
- sort()与赋值：异常发生时不会发生泄露资源，不与容器恒常性发生冲突
=======
- sort()与赋值：异常发生时不会发生泄露资源年，不与恒常性冲突


## 6.5 Set and Multisets
- <set>
- 根据特定的排序准则进行排序
- multisets 允许重复，sets不允许
- 满足assignable,copyable,comparable的元素，都可以作为元素

- 排序准则
  - 反对称：antisymmetric x<y为真，则y<x为假
  - 可传递：transitive x<y,y，y<z,则x<z
  - 非自反：irreflexive x<x永远为假
  - 注：以上是STL学术理论的一部分，见《泛型程序设计与STL》
### 6.5.1 set与Multisets的能力
- 通常以平衡二叉树,事实上是以红黑树
- 自动排序使二叉树在搜索元素时具有良好性能，是线性搜索时间的1/50
- 不提供直接存取元素的操作函数
- 使用迭代器间接存取元素时，元素值是常数

### 6.5.2 
>>>>>>> 3bb8a5e36e50fa780dca2ab557cc426cd9bb38d6
