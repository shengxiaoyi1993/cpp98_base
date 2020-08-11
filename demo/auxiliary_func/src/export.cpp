#include "export.h"
#include <iostream>
#include <algorithm>

bool int_compare(int* v_p0,int *v_p1){
  return *v_p0<*v_p1;
}
void test_minmax(){
  std::cout<<"min(32,78):"<<std::min(32,78)<<std::endl;
  std::cout<<"max(32,78):"<<std::max(32,78)<<std::endl;

  int m=76;
  int n=54;
  int* pm=&m;
  int* pn=&n;
  int* pmin=std::min(pm, pn,int_compare);
  std::cout << "min(76,54):"<<*pmin << '\n';

  int* pmax=std::max(pm, pn,int_compare);
  std::cout << "max(76,54):"<<*pmax << '\n';

  return ;

}


void test_swap(){
  int a=88;
  int b=6;
  std::cout<<"a:"<<a<<" b:"<<b<<std::endl;
  std::swap(a,b);
  std::cout<<"a:"<<a<<" b:"<<b<<std::endl;
  return ;

}
