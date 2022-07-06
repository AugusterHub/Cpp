/***Unit08 �쳣����***/

/** c++11 �� noexcept **/

/*
* 1. ��д������չʾ��Ϊ�������� noexcept��noexcept(true)��noexcept(false)������;
* 2. չʾnoexcept�����������أ�
* 3. ��noexcept�������׳��쳣��
* 4. չʾnoexcept��Ϊ�������Ч����
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
