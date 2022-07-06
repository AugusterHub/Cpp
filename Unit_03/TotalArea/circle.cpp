#include "circle.h"

Circle::Circle() {
	radius = 1.0;
}

Circle::Circle(double r_) {
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