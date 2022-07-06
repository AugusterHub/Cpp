#include "Circle.h"

Circle::Circle() {
	radius = 1.0;
}

Circle::Circle(double r_) {
	radius = r_;
}

// 方法函数实现
double Circle::getArea() {
	return 3.14 * radius * radius;
}