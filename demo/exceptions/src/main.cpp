// #include <iostream>
// #include "export.h"
//
// using namespace std;
//  int main() {
//    try{
//      test_overflow_error();
//    }
//    catch(...){
//      std::cout << "argument catched" << '\n';
//    }
//    return 0;
// }


#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class MyErr{
public:
	MyErr(string errmsg){
		cout << "构造异常类" << endl;
		this->errmsg=errmsg;
	}
	MyErr(const MyErr& err){
		cout << "拷贝构造异常类" << endl;
		this->errmsg=err.errmsg;
	}
	MyErr& operator=(const MyErr& err){
		cout << "拷贝赋值异常类" << endl;
		this->errmsg=err.errmsg;
		return *this;
	}
	~MyErr(){
		cout << "析构异常类" << endl;
	}

public:
	string errmsg;
};

void func1(){
	int a=10;//当抛出异常会被销毁

	throw MyErr("抛出异常");
}
int main(){

	try{
		func1();
	}catch(MyErr e){
		cout << "捕获异常" << endl;
	}
	// system("pause");
}
