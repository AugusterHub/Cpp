/***Unit03 对象和类基础***/

/** 3 对象数组 **/

#include "test.h"
/* 类的实现 */

// 构造函数实现
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

double Circle::getRadius() const {
	return radius;
}

void Circle::setRadius(double radius) {
	this.radius = radius;
}


