#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

 int main() {
   vector<int> list;
   // copy(istreambuf_iterator<_CharT> __first, istreambuf_iterator<_CharT> __last, ostreambuf_iterator<_CharT> __result);
   copy(istream_iterator <int>(cin),istream_iterator<int>(),back_inserter(list));
   //page 139
   std::cout << "normal:" << '\n';
   copy(list.begin(),list.end(), ostream_iterator<int>(cout, "\n"));
   std::cout << "reverse:" << '\n';
   copy(list.rbegin(),list.rend(), ostream_iterator<int>(cout, "\n"));

   system("pause");


  return 0;
}
