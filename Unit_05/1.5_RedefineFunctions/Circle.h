#pragma once
#include "Shape.h"

class Circle : public Shape {  //表明Cirle类从Shape类继承，需要include shape的头文件
	double radius;
public:
	Circle();
	Circle(double r, Color color_, bool filled_);
	double getAera();
	double getRadius() const;
	void setRadius();
	string toString();
};
