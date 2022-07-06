/***Unit03 ����������***/

/** 3.1 ����ָ�롢�������� **/
#include <iostream>
#include "Circle.h"

int main() {
	Circle* pc1 = new Circle{ 1.0 }; //����ָ��
	Circle pc3{2.0};
	Circle* pc2 = &pc3;

	std::cout << pc1->getArea() << std::endl;
	std::cout << pc2->getArea() << std::endl;

	auto pc5 = new Circle[3]{1.0, 2.0, 3.0}; //����ָ������
	for (int i = 0; i < 3; i++){
		std::cout << pc5[i].getArea() << std::endl;
	}

	delete pc1; //�ͷ�
	delete[] pc5;
	return 0;
}