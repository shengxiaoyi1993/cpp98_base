//#include <iostream>
//#include "export.h"
//#define SECONDS_PER_YEAR  60*60*24*365UL

// int main() {
//   std::cout<<SECONDS_PER_YEAR<<std::endl;
//   printList();

//  return 0;
//}



/// 该方法将申请内存/构造函数，析构函数/释放内存过程相分离，在某些场景具有意义


#include <iostream>
#include <memory>
using namespace std;
//先熟悉一下提供的allocator用法
int main(int argc, char const *argv[])
{
    allocator<int> a;
    int *ptr=a.allocate(5);
    a.construct(ptr,3);
    a.construct(ptr+1,-3);
    a.construct(ptr+2,3);
    a.construct(ptr+3,-3);
    a.construct(ptr+4,3);
    for(int i=0;i<5;i++)
    {
        cout<<*(ptr+i)<<" ";
        a.destroy(ptr+i);
    }
    a.deallocate(ptr,5);
    return 0;
}
