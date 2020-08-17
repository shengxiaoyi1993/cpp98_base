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
