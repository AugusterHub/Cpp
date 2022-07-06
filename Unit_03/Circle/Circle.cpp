/***Unit03 ����������***/

/** 3 �������� **/

#include "test.h"
/* ���ʵ�� */

// ���캯��ʵ��
Circle::Circle() {
	radius = 1.0;
}

Circle::Circle(double r_) {
	radius = r_;
}

// ��������ʵ��
double Circle::getArea() {
	return 3.14 * radius * radius;
}

double Circle::getRadius() const {
	return radius;
}

void Circle::setRadius(double radius) {
	this.radius = radius;
}


