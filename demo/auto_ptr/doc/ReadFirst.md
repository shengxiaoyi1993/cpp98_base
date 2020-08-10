# readme
## 原因
- 解决发生异常时普通指针处理方式复杂的（catch所有异常）

## 特点
- 一个（智能指针）对象只能有一个拥有者
- 未定义算术运算
- 不能使用赋值方式进行初始化
- 只有auto_ptr可以当作另一个auto_ptr的初值，普通指针不行

## attention

### 拥有权转移
- 以同一对象为初值对auto_ptr进行初始化时，可能会出现。同一个对象被两个对象拥有的情况
- 防范方法是，当发生拷贝时，原包含的内存的拥有者变成拷贝，原对象为null，赋值同；
  若原对象拥有一片内存，被另一对象赋值，则原内存被释放

- 避免使用引用传递auto_ptr
- auto_ptr的终点：被一个函数调用
- auto_ptr起点：auto_ptr作为返回值返回
- 当不想发生转移就避免使用auto_ptr,不能更改auto_ptr的拥有权,但可改变值

- auto_ptr cannot point to `array`
- auto_ptr 不能作为STL容器的元素