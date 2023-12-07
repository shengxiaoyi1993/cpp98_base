#include <iostream>
#include <string>
#include <vector>
#include <map>
//#include <



using namespace std;

int main(int argc, char *argv[])
{
  case_map();
  vector<string> l_str={
    "admin:123456",
    "admin:123456"
  };

  string v_str="admin:123456";
  size_t pos= v_str.find_first_of(":");
//  AuthPara ap;
  if (pos!= string::npos) {
    ///截取
      string __user=v_str.substr(0,pos);
      ///截取":"之后的字符串
      string __password=v_str.substr(pos+1);
  }

  return 0;
}

