#pragma once
#include "Shape.h"
// ����Rectangle�࣬��Shape�̳�

class Rectangle : public Shape {
private:
	double width{ 1.0 };
	double height{ 1.0 };

public:
	Rectangle() = default;
	Rectangle(double w, double h, Color c, bool f);

	double getWidth() const; // �˴���const ���Ǻ�������ֵ��const ���Ǳ���������
	void setWidth(double w);
	double getHeight() const;
	void setHeight(double h);

	double getAera() const;
	string toString();
};