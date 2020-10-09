#define GETSTR(val) #val

#include <iostream>
#include <string>
#include "export.h"
#include<algorithm>
#include <vector>
#include <sstream>
#include <deque>
#include <iterator>


using namespace std;






int main() {

  try {
//    test_dequeinit();
//    test_vector();
    test_vector_bool();

  } catch (string msg) {
    cout<<"msg:"<<msg<<endl;
  }



  return 0;
}
