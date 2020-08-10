#include <iostream>
#include <limits>
#include "export.h"

 int main() {
   std::cout<<"max(short):"<<std::numeric_limits<short>::max()<<std::endl;
   std::cout<<"min(short):"<<std::numeric_limits<short>::min()<<std::endl;

   printList();

  return 0;
}
