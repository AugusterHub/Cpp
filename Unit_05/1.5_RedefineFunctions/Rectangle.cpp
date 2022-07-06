#include "Rectangle.h"

//子类Rectangle使用基类Shape的构造函数初始化基类的数据成员
Rectangle::Rectangle(double w, double h, Color c, bool f) : width{ 1.0 }, height{ 1.0 }, Shape(c, f) {
}

double Rectangle::getWidth() const {
	return width;
}
void Rectangle::setWidth(double w) {
	width = w;
}
double Rectangle::getHeight() const {
	return height;
}
void Rectangle::setHeight(double h) {
	height = h;
}

double Rectangle::getAera() const {
	return width * height;
}

string Rectangle::toString() {
	return ("Rectangle: w " + std::to_string(width) + " ," 
		+ "h" + std::to_string(height) + "," 
		+ colorToString() + " " + filledToString());
}