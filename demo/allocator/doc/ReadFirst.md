- 内存释放的时候还需要提供对象的个数
- allocate、deallocate、construct、destroy四个函数，分别表示内存分配，内存释放、对象构造、对象析构
- allocator的特点是将内存分配(allocate)与对象构造(construct)分离，这样使得对内存的管理更加灵活，性能较高
- `