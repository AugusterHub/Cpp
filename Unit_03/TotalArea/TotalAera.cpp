/***Unit03 对象和类基础***/

/** 3.2 对象数组 **/

#include <iostream>
#include "circle.h"

int main() {
	Circle cal1[] = { Circle{1.0}, Circle{2.0}, Circle{3.0} }; //对象数组，通过匿名对象的方式初始化
	Circle cal2[]{10.0, 11.0, 12.0}; //对象数组，通过直接列表初始化的方式初始化

	for (int i = 0; i < sizeof(cal1) / sizeof(cal1[0]); i++){
		std::cout << cal1[i].getAera() << std::endl;
	}

	for (auto x:cal2) {
		std::cout << x.getAera() << std::endl;
	}

	return 0;
}