#include "Circle.h"

Circle::Circle() {
	radius = 1.0;
}

//����Circleʹ�û���Shape�Ĺ��캯����ʼ����������ݳ�Ա
Circle::Circle(double r_, Color color_, bool filled_) : Shape{ color_, filled_ } {
	radius = r_;
}

double Circle::getAera() {
	return 3.14 * radius * radius;
}

double Circle::getRadius() const {
	return radius;
}

void Circle::setRadius() {
	this->radius = radius;
}
string Circle::toString() {
	return ("Circle: radius " + std::to_string(radius) + " ," + colorToString() + " " + filledToString());
}