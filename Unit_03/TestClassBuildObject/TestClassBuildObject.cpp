/***Unit03 ����������***/

/** 1 ���ഴ������ **/

#include <iostream>

class Circle {
public:
	// �������
	double radius;

	// ������Ĺ��캯��
	Circle() {
		radius = 1.0;
	}

	// ���캯������
	Circle(double r) {
		radius = r;
	}

	double getArea() {
		return 3.14 * radius * radius;
	}
};


int main() {
	Circle c1; // ʵ��������c1
	Circle c2{ 2.0 }; // ʵ��������c2

	std::cout << c1.getArea() << std::endl;
	std::cout << c2.getArea() << std::endl;
	return 0;
}