/***Unit02 c�﷨����ǿ�Լ���Ӧ��c++ 11����***/

/**3 ������ָ��**/

#include <iostream>;
using std::cout;
using std::endl;

void printArea(double radius = 1);
int main() {
	// ��������
	const int X = 6;

	// �������ɱ�
	//X = 7;

	// ����ָ����ָ���ݲ��ɱ�
	int y = 2;
	const int* p = &X;
	//(*p) = 30;
	const int* q = &y;
	//(*q) = 90;

	// ָ�볣�����ɱ�
	int* const r = &y;
	int z = 5;
	//r = &z;
	cout << *r << " " << y << endl;

	// ��ָ�볣��
	const int* const s = &y;

	printArea();
	printArea(4);



	return 0;
}

void printArea(double radius) {
	cout << radius << endl;
}