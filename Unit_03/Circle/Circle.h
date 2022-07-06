#pragma once //保证同一个头文件只被包含一次

/* 类的声明 */
class Circle {
	// 类的属性
	double radius;

public:
	// 构造函数以及方法函数声明
	Circle();
	Circle(double r);
	double getArea();
};