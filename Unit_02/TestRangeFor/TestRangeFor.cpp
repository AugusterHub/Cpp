/***Unit02 c�﷨����ǿ�Լ���Ӧ��c++ 11����***/

/** ���ڷ�Χ��forѭ�� **/

#include <iostream>
using namespace std;

int main() {
	int a[] = {1, 2, 3};

	// ��������a�е�ֵ
	for (auto i : a) {
		cout << i << endl;
	}

	// �޸�����a�е�ֵ
	for (auto& i : a) {
		i = i * i;
	}
	cout << a[2] << endl;

	return 0;
}
