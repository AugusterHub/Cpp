#include "Circle.h"
#include <iostream>
/* 主函数调用类 */
int main() {
	Circle c1; // 实例化对象c1
	Circle c2{ 2.0 }; // 实例化对象c2

	std::cout << c1.getArea() << std::endl;
	std::cout << c2.getArea() << std::endl;
	return 0;
}