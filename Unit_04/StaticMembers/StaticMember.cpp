/***Unit04 �������߼�***/

/** 02 �����졢���ɱ�����뾲̬��Ա  **/

#include <iostream>
#include "Square.h"

int Square::numOfObjects{10}; // ���ʾ�̬���ݳ�Ա֮ǰ������Ҫ�ȶ���
int main() {
	Square s1;
	std::cout << s1.getNumberOfObjects() << std::endl;
	Square s2;
	std::cout << Square::getNumberOfObjects() << std::endl; // ��̬��Ա�����������ķ�ʽ���з���
	return 0;
}