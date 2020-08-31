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