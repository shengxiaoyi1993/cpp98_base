#include <iostream>
#include <string>
#include "export.h"
#include <cstring>

using namespace std;
 int main() {

   // char line[32]="encrypted:458f15ada8e3cfdec5dbc";
   // char key[16];
   // char value[24];
   // sscanf(line,"%[^:]:%24[^:]",key,value);
   // printf("key:%s\n",key );
   // printf("value:%s\n",value );
   string v_str("hello world");
   std::cout << "v_str:"<<v_str << '\n';
   std::cout << "size:"<<v_str.size() << '\n';
   unsigned char *pdata=new unsigned char[v_str.size()];

   memcpy(pdata,v_str.c_str(),v_str.size());

   std::cout << "0:"<<hex<<(int)pdata[0] << '\n';
   std::cout << "1:"<<hex<<(int)pdata[1] << '\n';
   std::cout << "2:"<<hex<<(int)pdata[2] << '\n';
   std::cout << "3:"<<hex<<(int)pdata[3] << '\n';
   delete []pdata;

   unsigned short *pshort=new unsigned short[5];
   memcpy(pshort,v_str.c_str(),11);
   std::cout << "0:"<<hex<<pshort[0] << '\n';
   std::cout << "1:"<<pshort[1] << '\n';
   std::cout << "2:"<<pshort[2] << '\n';
   std::cout << "3:"<<pshort[3] << '\n';
   std::cout << "0:"<<dec<<pshort[0] << '\n';

   delete []pshort;




   printList();

  return 0;
}
