/***Unit03 ����������***/

/** 3.2 �������� **/

#include <iostream>
#include "circle.h"

int main() {
	Circle cal1[] = { Circle{1.0}, Circle{2.0}, Circle{3.0} }; //�������飬ͨ����������ķ�ʽ��ʼ��
	Circle cal2[]{10.0, 11.0, 12.0}; //�������飬ͨ��ֱ���б��ʼ���ķ�ʽ��ʼ��

	for (int i = 0; i < sizeof(cal1) / sizeof(cal1[0]); i++){
		std::cout << cal1[i].getAera() << std::endl;
	}

	for (auto x:cal2) {
		std::cout << x.getAera() << std::endl;
	}

	return 0;
}