/***Unit08 �쳣����***/

/** �쳣������� **/

/*
* ʹ��if��䴦��0����
* չʾʹ���쳣��������0��������
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;



int main() {
	int x{ 0 }, y{ 0 };
	cin >> x >> y;

	try {            // try
		if (y == 0) {
			throw y; // �ӳ�һ���쳣
		}
		cout << static_cast<double>(x) / y << endl;
	}

	catch (int& e) { // �����쳣(���������������)
		cout << "y is " << e << " runtime error" << endl;
	}

	return 0;
}