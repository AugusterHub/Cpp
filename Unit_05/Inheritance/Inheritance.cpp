/***Unit05 继承和多态***/

/** 继承构造  **/
// 继承
#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
// 创建 Shape/Circle/Rectangle对象
// 用子类类对象调用基类函数toString()

int main() {
	Shape s1{Color::blue, false};
	Circle c1{3.9, Color::green, true}; //通过子类构造函数调用基类的构造函数可对基类中的数据成员进行修改
	Rectangle r1{4.0, 1.0, Color::white, true};

	std::cout << s1.toString() << std::endl;
	std::cout << c1.toString() << std::endl;
	std::cout << r1.toString() << std::endl;

	return 0;
}