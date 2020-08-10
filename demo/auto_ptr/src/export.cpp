#include "export.h"
#include <iostream>
#include <memory>
#include <vector>

int test_auto_ptr(){
  std::auto_ptr<int > ptr_int(new int(6));
  std::cout << "*ptr_int:"<<*ptr_int << '\n';

}

void print(std::auto_ptr<int> v_p){
  std::cout<<"v_p:"<<*v_p<<std::endl;
}

int test_auto_ptr_transmit(){
  std::auto_ptr<int > ptr_int(new int(6));
  print(ptr_int);
  if(ptr_int.get() == NULL){
    std::cout<<"ptr_int iS NULL"<<std::endl;

  }
  else{
    std::cout<<"ptr_int iS not NULL"<<std::endl;


  }

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
  if(ptr_int.get() == NULL){
    std::cout<<"ptr_int iS NULL"<<std::endl;
  }
  else{
    std::cout<<"ptr_int iS not NULL"<<std::endl;
  }
  std::cout << "ptr_int init:"<<*ptr_int << '\n';
  return 0;
}


void test_auto_ptr_inSTL(){
  // //no error ,but not allowed
  // std::vector<std::auto_ptr<int> > list;
  // std::auto_ptr<int> ptr_int(new int(5));

// //compile-time error
//   list.push_back(ptr_int);
//   std::cout<<*list[0]<<std::endl;
}

void test_auto_ptr_func(){
  std::auto_ptr<int > ptr_int(new int(6));
  if(ptr_int.get() == NULL){
    std::cout<<"NULL"<<std::endl;
  }
  else{
    std::cout<<"not NULL"<<std::endl;
  }
  int *p= ptr_int.release();
  std::cout << "p:" << *p<<'\n';
  if(ptr_int.get() == NULL){
    std::cout<<"NULL"<<std::endl;
  }
  else{
    std::cout<<"not NULL"<<std::endl;
  }

  ptr_int.reset(new int(4));
  std::cout << "new:" <<*ptr_int<< '\n';



return ;
}
