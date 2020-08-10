#include "export.h"
#include <iostream>
#include <memory>

int test_auto_ptr(){
  std::auto_ptr<int > ptr_int(new int(6));
  std::cout << "ptr_int:"<<*ptr_int << '\n';
}

void print(std::auto_ptr<int> v_p){
  std::cout<<"v_p:"<<*v_p<<std::endl;
}

int test_auto_ptr_transmit(){
  std::auto_ptr<int > ptr_int(new int(6));
  print(ptr_int);
// error occurs
  // std::cout << "ptr_int init:"<<*ptr_int << '\n';
  return 0;
}
  void const_print(const std::auto_ptr<int>& v_p){
    std::cout<<"v_p:"<<*v_p<<std::endl;
  }


int test_auto_ptr_transmit_byconstreference(){
  const std::auto_ptr<int > ptr_int(new int(6));
  const_print(ptr_int);
  std::cout << "ptr_int init:"<<*ptr_int << '\n';
  return 0;
}
