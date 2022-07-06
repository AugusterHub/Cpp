#include <iostream>
#include "circle1.h"
/***Unit03 对象和类基础***/

/** 3.3 对象作为函数的参数 **/

// pass by value
//void print(Circle c) {
//	std::cout << c.getAera() << std::endl; 
//}

//pass by reference
void print(Circle& c) {
	std::cout << c.getAera() << std::endl;
}

// pass by pointer
void print(Circle* c) {
	std::cout << c->getAera() << std::endl;
}


int main() {
	Circle a[]{ 1.0, 2.0, 3.0 };
	print(a[0]);
	print(a[1]);
	print(a+2);

	return 0;
}