#include <iostream>
#include "export.h"

using namespace std;
 int main() {
   pair<int ,int> pair_int(2,5);
   cout<<"first:"<<pair_int.first<<" second:"<<pair_int.second<<endl;
   pair<int ,int> pair_int2(6,5.8);
   std::cout << "compare:"<<(pair_int<pair_int2) << '\n';
   auto pair_int3=make_pair(5, 7);
   std::cout << "compare:"<<(pair_int3==pair_int) << '\n';

  auto pair_int4= getPos();
  cout<<"4 first:"<<pair_int4.first<<" second:"<<pair_int4.second<<endl;





  return 0;
}
