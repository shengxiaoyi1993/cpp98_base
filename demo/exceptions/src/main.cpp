#include <iostream>
#include "export.h"

using namespace std;
 int main() {
   try{
     test_overflow_error();
   }
   catch(...){
     std::cout << "argument catched" << '\n';
   }
   return 0;
}
