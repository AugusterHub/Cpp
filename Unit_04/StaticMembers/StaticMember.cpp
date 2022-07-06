/***Unit04 对象和类高级***/

/** 02 代理构造、不可变对象与静态成员  **/

#include <iostream>
#include "Square.h"

int Square::numOfObjects{10}; // 访问静态数据成员之前，必须要先定义
int main() {
	Square s1;
	std::cout << s1.getNumberOfObjects() << std::endl;
	Square s2;
	std::cout << Square::getNumberOfObjects() << std::endl; // 静态成员可以用类名的方式进行访问
	return 0;
}