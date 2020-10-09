#include "export.h"
#include <iostream>

void printList(){
  const unsigned int bigBigNum=4096;
  int *a;
try
{
    //分配内存
    a= new int[bigBigNum];
}
catch(std::bad_alloc)
{
    //异常处理
    //弹出提示对话框
    // 返回
}
  return;

}





void test_dequeinit(){
//  //note:标准输入只会接收数字，若非数字则不会接收
//  //注意初始化列表中的参数需要添加括号
//  std::deque<int> a((std::istream_iterator<int>(std::cin)), (std::istream_iterator<int>()));
//  cout<<"a.size():"<<a.size()<<endl;
//  for(uint i=0;i<a.size();i++){
//    cout<<a[i]<<" ";
//  }

  //比较大小
  int m[]={1,2,3,4};
  std::vector<int> vector_m0(m,m+4);
  std::vector<int> vector_m1(m,m+4);
  if(vector_m0 == vector_m1){
    cout <<"vector_m0 and vector_m1 equal !"<<endl;
  }
  else{
    cout <<"vector_m0 and vector_m1 not equal !"<<endl;
  }
  int n[]={1,2,3,6};
  std::vector<int> vector_n(n,n+4);
  if(vector_m0 == vector_n){
    cout <<"vector_m0 and vector_n equal !"<<endl;
  }
  else{
    if(vector_m0>vector_n){
      cout <<"vector_m0>vector_n !"<<endl;
    }
    else{
      cout <<"vector_m0!>vector_n !"<<endl;
    }
    cout <<"vector_m0 and vector_n not equal !"<<endl;
  }

  int l1[]={1,2,3,4};
  std::vector<int> vector_l1(l1,l1+4);
  int l2[]={1,2,4,8};
  std::vector<int> vector_l2(l2,l2+4);

  cout<<"before swap:";
  cout<<"vector_l1:";
  copy(vector_l1.begin(),vector_l1.end(),ostream_iterator<int>(cout,","));
  cout<<"vector_l2:";
  copy(vector_l2.begin(),vector_l2.end(),ostream_iterator<int>(cout,","));

  vector_l1.swap(vector_l2);

  cout<<"after swap:";
  cout<<"vector_l1:";
  copy(vector_l1.begin(),vector_l1.end(),ostream_iterator<int>(cout,","));
  cout<<"vector_l2:";
  copy(vector_l2.begin(),vector_l2.end(),ostream_iterator<int>(cout,","));

}

void test_vector(){
  //init
  cout<<"after init"<<endl;
  vector<int> list(8);
  cout<<"size:"<<list.size()<<endl;
  cout<<"capacity:"<<list.capacity()<<endl;
  cout<<"max_size:"<<list.max_size()<<endl;

  //reverse
  cout<<"after reverse"<<endl;
  list.reserve(16);
  cout<<"size:"<<list.size()<<endl;
  cout<<"capacity:"<<list.capacity()<<endl;
  cout<<"max_size:"<<list.max_size()<<endl;

  //resize
  cout<<"after resize"<<endl;
  list.resize(32);
  cout<<"size:"<<list.size()<<endl;
  cout<<"capacity:"<<list.capacity()<<endl;
  cout<<"max_size:"<<list.max_size()<<endl;

  cout<<hex<<&list[6]<<endl;
  cout<<dec;
  list.erase(list.begin()+6);
  cout<<"size:"<<list.size()<<endl;
  cout<<"capacity:"<<list.capacity()<<endl;
  cout<<"max_size:"<<list.max_size()<<endl;
  cout<<hex<<&list[6]<<endl<<dec;

  //decrease capcity
  cout<<"---decrease capcity---"<<endl;
  int a[]={1,2,3,4,5};
  vector<int> list_a(a,a+5);
  list_a.reserve(16);
  cout<<"size:"<<list_a.size()<<endl;
  cout<<"capacity:"<<list_a.capacity()<<endl;
  cout<<"max_size:"<<list_a.max_size()<<endl;
  copy(list_a.begin(),list_a.end(),ostream_iterator<int>(cout,","));
  cout<<endl;
  vector<int>(list_a).swap(list_a);
  copy(list_a.begin(),list_a.end(),ostream_iterator<int>(cout,","));
  cout<<endl;
  cout<<"size:"<<list_a.size()<<endl;
  cout<<"capacity:"<<list_a.capacity()<<endl;
  cout<<"max_size:"<<list_a.max_size()<<endl;

  //assign
  cout<<"---assign---"<<endl;
  int b[]={1,2,3,4,5};
  vector<int> list_b(b,b+5);
  copy(list_b.begin(),list_b.end(),ostream_iterator<int>(cout,","));
  cout<<endl;
  cout<<"size:"<<list_b.size()<<endl;
  cout<<"capacity:"<<list_b.capacity()<<endl;
  cout<<"max_size:"<<list_b.max_size()<<endl;
  list_b.assign(6,7);
  copy(list_b.begin(),list_b.end(),ostream_iterator<int>(cout,","));
  cout<<endl;
  cout<<"size:"<<list_b.size()<<endl;
  cout<<"capacity:"<<list_b.capacity()<<endl;
  cout<<"max_size:"<<list_b.max_size()<<endl;

  //remove
  cout<<"---remove---"<<endl;
  int c[]={1,2,3,4,5};
  vector<int> list_c(c,c+5);

  cout<<"before remove"<<endl;
  copy(list_c.begin(),list_c.end(),ostream_iterator<int>(cout,","));
  cout<<endl;
  vector<int>::iterator it_list_c= remove(list_c.begin(),list_c.end(),4);

  cout<<"after remove"<<endl;
  copy(list_c.begin(),list_c.end(),ostream_iterator<int>(cout,","));
  cout<<endl;

  cout<<"remove element"<<endl;
  copy(it_list_c,list_c.end(),ostream_iterator<int>(cout,","));
  cout<<endl;

}

void test_vector_bool(){
  std::vector<bool> list;
  list.push_back(true);
  list.push_back(true);
  list.push_back(true);
  list.push_back(true);
  list[0].flip();
  list.flip();
  //proxy技术
  //list[0]返回的内部类型的引用，该内部类型在赋值给bool 时发生自动型别转换
  cout<<list[0]<<endl;
  cout<<endl;


}


