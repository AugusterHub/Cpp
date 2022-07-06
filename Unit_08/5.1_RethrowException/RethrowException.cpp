/***Unit08 异常处理***/

/** 重抛异常 **/

/*展示在catch中用throw重抛异常的效果
* 函数f｛
	try
	catch
		throw
｝
*/

#include <iostream>
#include <exception>
#include <stdexcept>
using std::cout;
using std::endl;

void f();
int main() {
	try {
		f();
	}
	catch (const std::exception& e) {
		cout << "catched except: " << e.what() << endl;
	}
	return 0;
}

void f() {
	try {
		throw std::logic_error("Throw in f()");
	}
	catch (const std::exception & e) {
		cout << "catched in f()" << endl;
		throw;
	}
}