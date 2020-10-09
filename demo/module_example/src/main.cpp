#define GETSTR(val) #val

#include <iostream>
#include <string>
#include "export.h"
#include<algorithm>
#include <vector>
#include <sstream>
using namespace std;


string stringFromInt(int v_val){
  stringstream ofs;
  ofs<<v_val;
  string ret;
  ofs>>ret;
  return ret;

}

void add10(int& v_val){
  v_val+=10;
}
void printVal(int& v_val){
  cout<<" "<<v_val;
}

class Add{
private:
  int _val;
public:
  Add(int v_val):_val(v_val)
  {
  }
  ~Add(){

  }
  void operator()(int & v_val) const{
    v_val+=_val;
  }


};

 int main() {
   try {
     vector<int> list;
     list.push_back(1);
     list.push_back(2);

     for_each(list.begin(),list.end(),add10);
     for_each(list.begin(),list.end(),printVal);
     for_each(list.begin(),list.end(),Add(12));
     for_each(list.begin(),list.end(),printVal);
     cout<<stringFromInt(__LINE__)<<endl;
     cout<<"__LINE__:"<<string(GETSTR(__LINE__))<<endl;

     throw "[FUNC]: "+string(__FUNCTION__)+" [LINE: ]"+stringFromInt(__LINE__)+" [Error]: self test";

   } catch (string msg) {
     cout<<"msg:"<<msg<<endl;
   }



  return 0;
}
