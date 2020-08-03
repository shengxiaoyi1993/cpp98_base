#include "export.h"
#include <iostream>

using namespace std;
//函数名后的 throw(..) 称为异常规格exceptions specifictions
void test_bad_alloc() throw(std::bad_alloc){
  int *a=nullptr;

  // a=new int[4096000000000];
  // std::cout << "after alloc" << '\n';
  // // fflush(stdout);

  try{
    a=new int[4096000000000];
  }
  catch(std::bad_alloc){
    std::cerr << "bad_alloc from new" << '\n';
    throw std::bad_alloc();
  }
 return;

}


void test_invalid_argument() {
  std::vector<short> v;
  v.push_back(88888888888888888888888800000000000000000099999999999999999999999999999999999999999999999999999999999999988888888888888888888);
}


void test_overflow_error(){
  short a=644747464565546876867967567464534564;
  short b=784655634353473523423532436345746545;
  short c=a+b;
  std::cout << "c:"<<c << '\n';
}
