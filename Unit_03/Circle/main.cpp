#include "Circle.h"
#include <iostream>
/* ������������ */
int main() {
	Circle c1; // ʵ��������c1
	Circle c2{ 2.0 }; // ʵ��������c2

	std::cout << c1.getArea() << std::endl;
	std::cout << c2.getArea() << std::endl;
	return 0;
}