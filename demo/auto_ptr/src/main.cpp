#include <iostream>
#include "export.h"
#include <string.h>
#include <stdlib.h>

void test()
{
  const char* data="hello";
  while (true) {
    char * result=(char*)malloc(strlen(data)+1);
    memcpy(result,data,strlen(data)+1);
    std::string str(reinterpret_cast<char*>(result));
    free(result);
    result=NULL;
    std::cout<<"str:"<<str<<std::endl;
  }

}

 int main() {

   // test_auto_ptr();
   // test_auto_ptr_transmit();
   // test_auto_ptr_transmit_byconstreference();
   // test_auto_ptr_inSTL();
//   test_auto_ptr_func();
   test();

  return 0;
}
