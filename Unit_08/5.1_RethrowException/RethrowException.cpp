/***Unit08 �쳣����***/

/** �����쳣 **/

/*չʾ��catch����throw�����쳣��Ч��
* ����f��
	try
	catch
		throw
��
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