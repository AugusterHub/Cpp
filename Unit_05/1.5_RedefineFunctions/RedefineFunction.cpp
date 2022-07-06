/***Unit05 继承和多态***/

/** 名字隐藏与重定义 **/

/*
任务1：改造Shape类，拆分Shape.h + Shape.cpp
任务2：改造Shape::toString() 函数，拆出
	（1）枚举颜色（color）转为字符串的代码
	（2）布尔填充（filled）转为字符串的代码
任务3：为Circle和Rectangle添加toString（）函数

*/
#include <iostream>
#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {
	Shape s1{Color::blue, false};
	Circle c1{3.9, Color::green, true};
	Rectangle r1{4.0, 1.0, Color::white, true};

	std::cout << s1.toString() << std::endl;
	std::cout << c1.toString() << std::endl;
	std::cout << r1.toString() << std::endl;

	std::cout << "c1 area: " << c1.getAera() << std::endl;
	std::cout << "r1 area: " << r1.getAera() << std::endl;

	return 0;
}