#include <iostream>
#include <fstream>
#include <string>
using namespace std;

 int main() {
   ofstream outfile("test.txt",ios::app);
   outfile<<"this is test string";
   outfile.close();

  return 0;
}
