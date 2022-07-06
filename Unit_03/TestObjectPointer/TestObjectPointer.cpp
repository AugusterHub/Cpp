/***Unit03 对象和类基础***/

/** 3.1 对象指针、对象数组 **/
#include <iostream>
#include "Circle.h"

int main() {
	Circle* pc1 = new Circle{ 1.0 }; //对象指针
	Circle pc3{2.0};
	Circle* pc2 = &pc3;

	std::cout << pc1->getArea() << std::endl;
	std::cout << pc2->getArea() << std::endl;

	auto pc5 = new Circle[3]{1.0, 2.0, 3.0}; //对象指针数组
	for (int i = 0; i < 3; i++){
		std::cout << pc5[i].getArea() << std::endl;
	}

	delete pc1; //释放
	delete[] pc5;
	return 0;
}