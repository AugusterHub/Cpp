#pragma once
#include "Shape.h"

class Circle : public Shape {  //����Cirle���Shape��̳У���Ҫinclude shape��ͷ�ļ�
	double radius;
public:
	Circle();
	Circle(double r, Color color_, bool filled_);
	double getAera();
	double getRadius() const;
	void setRadius();
	string toString();
};
