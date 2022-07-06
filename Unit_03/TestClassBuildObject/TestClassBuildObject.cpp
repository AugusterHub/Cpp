/***Unit03 对象和类基础***/

/** 1 用类创建对象 **/

#include <iostream>

class Circle {
public:
	// 类的属性
	double radius;

	// 定义类的构造函数
	Circle() {
		radius = 1.0;
	}

	// 构造函数重载
	Circle(double r) {
		radius = r;
	}

	double getArea() {
		return 3.14 * radius * radius;
	}
};


int main() {
	Circle c1; // 实例化对象c1
	Circle c2{ 2.0 }; // 实例化对象c2

	std::cout << c1.getArea() << std::endl;
	std::cout << c2.getArea() << std::endl;
	return 0;
}