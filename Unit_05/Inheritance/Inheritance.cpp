/***Unit05 �̳кͶ�̬***/

/** �̳й���  **/
// �̳�
#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
// ���� Shape/Circle/Rectangle����
// �������������û��ຯ��toString()

int main() {
	Shape s1{Color::blue, false};
	Circle c1{3.9, Color::green, true}; //ͨ�����๹�캯�����û���Ĺ��캯���ɶԻ����е����ݳ�Ա�����޸�
	Rectangle r1{4.0, 1.0, Color::white, true};

	std::cout << s1.toString() << std::endl;
	std::cout << c1.toString() << std::endl;
	std::cout << r1.toString() << std::endl;

	return 0;
}