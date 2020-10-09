#include <vector>
#include <iostream>
#include<algorithm>
#include <vector>
#include <sstream>
#include <deque>
#include <iterator>

using namespace std;

void printList();

void test_dequeinit();


//    throw "[FUNC]: "+string(__FUNCTION__)+" [LINE: ]"+stringFromInt(__LINE__)+" [Error]: self test";
template<typename T>
inline string stringFromInt(const T& v_val){
  stringstream convert;
  convert<<v_val;
  string ret;
  convert>>ret;
  return ret;
}

void test_vector();


void test_vector_bool();
