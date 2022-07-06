/***Unit02 c语法的增强以及对应的c++ 11特性***/

/**1 引用，c++ 11 空指针与动态内存分配**/

/*c++ 11 空指针与动态内存分配
* c++ 11中空指针用 nullptr表示，c中用NULL表示空指针；
* 动态内存申请new，释放delete；c中是申请内存malloc，释放free（）；
*/

#include <iostream>
int main() {
	int* p = nullptr;
	int* q{nullptr}; //c++11 初始化列表的写法

	p = new int(42);  //整型变量申请内存，变量值初始化为42，赋值给指针变量p
	q = new int[ 4 ]; //整形数组申请内存，数组长度为4，赋值给指针变量q

	std::cout << "Before: *p=" << *p << std::endl;
	*p = 24;
	std::cout << "After: *p=" << *p << std::endl;

	for (int i = 0; i < 4; i++){
		*(q + i) = 10 + i;
		std::cout << *(q + i) << std::endl;
	}

	delete p; //释放内存
	delete [] q; //数组释放内存加[]

	return 0;
}