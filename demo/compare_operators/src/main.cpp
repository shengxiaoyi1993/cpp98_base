#include <iostream>
#include "export.h"




 int main() {

   TestObj obj0(6,88.9);
   TestObj obj1(7,88.9);
   if(obj0 == obj1){
     std::cout << "Equal!" << '\n';
   }
   else{
     std::cout << "not Equal!" << '\n';
   }

   if(obj0 < obj1){
     std::cout << "obj0 < obj1!" << '\n';
   }
   else{
     std::cout << "obj0 < obj1 false" << '\n';
   }

   //must has this
   
   if(obj0 > obj1){
     std::cout << "obj0 > obj1!" << '\n';
   }
   else{
     std::cout << "obj0 > obj1 false" << '\n';
   }


  return 0;
}
