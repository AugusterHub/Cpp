/***Unit02 c�﷨����ǿ�Լ���Ӧ��c++ 11����***/

/**4 ���⺯�� a������������b���غ�����c����Ĭ�ϲ�����d��������**/
#include <iostream>
using std::cout;
using std::endl;

auto max(int x, int y) {
	return x > y ? x : y;
}

auto max(int x, int y, int z) {
	return max(x, max(y, z));
}

int i{ 100 };
int main() {

	// ����������
	for (int i = 0; i < 3; i++)
	{
		cout << i << endl;
		::i += i;
		cout << ::i << endl; // :: һԪ����������������ȫ�ֱ���
	}

	// ���غ���
	cout << max(1, 2) << endl;
	cout << max(1, 2, 9) << endl;
	// ����Ĭ�ϲ���

	return 0;
}