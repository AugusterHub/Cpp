/***Unit05 �̳кͶ�̬***/

/** �����������ض��� **/

/*
����1������Shape�࣬���Shape.h + Shape.cpp
����2������Shape::toString() ���������
	��1��ö����ɫ��color��תΪ�ַ����Ĵ���
	��2��������䣨filled��תΪ�ַ����Ĵ���
����3��ΪCircle��Rectangle���toString��������

*/
#include <iostream>
#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {
	Shape s1{Color::blue, false};
	Circle c1{3.9, Color::green, true};
	Rectangle r1{4.0, 1.0, Color::white, true};

	std::cout << s1.toString() << std::endl;
	std::cout << c1.toString() << std::endl;
	std::cout << r1.toString() << std::endl;

	std::cout << "c1 area: " << c1.getAera() << std::endl;
	std::cout << "r1 area: " << r1.getAera() << std::endl;

	return 0;
}