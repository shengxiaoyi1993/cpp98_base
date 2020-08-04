# ReadFirst

- 错误信号只会被接受一次
- 某个函数发出的错误信号可以被指定
- 若某函数抛出的异常不满足异常规格且不是 derived from exception specifictions，则程序会在此处中断
- 函数定义和函数声明均需要有异常规格，且两者需要一致，否则编译失败
- 
