/***Unit04 �������߼�***/

/** �������캯��  **/

// ����2����ջ�Ͷ��Ϸֱ𴴽�Square����

#include <iostream>
#include "square.h"
using namespace std;
int Square::numOfObjects = 0;

int main() {
	Square s1{ 1.0 };
	cout << s1.getNumberOfObjects() << endl;

	Square s2{ s1 }; // ջ ���������ʼ��
	cout << s2.getNumberOfObjects() << endl;

	Square* s3 = new Square{ s1 }; //�� ���������ʼ��
	cout << s3->getNumberOfObjects() << endl;
	
	delete s3;

	return 0;
}