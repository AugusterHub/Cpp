/***Unit08 异常处理***/

/** c++11 的 noexcept **/

/*
* 1. 编写函数，展示作为声明符的 noexcept，noexcept(true)，noexcept(false)的区别;
* 2. 展示noexcept不能区分重载；
* 3. 在noexcept函数中抛出异常；
* 4. 展示noexcept作为运算符的效果；
*/
#include <iostream>
using std::cout;
using std::endl;

void foo() noexcept{}
//void foo() {}
void tao() noexcept(1) {}
void zen() noexcept(1 - 1) {}

int main() {
	cout << "foo() noexcept: " << noexcept(foo()) << endl;
	//cout << "foo() " << noexcept(foo()) << endl;
	cout << "tao() noexcept(1) " << noexcept(tao()) << endl;
	cout << "zen() noexcept(1-1) " << noexcept(zen()) << endl;
	return 0;
}
