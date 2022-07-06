/***Unit06 �ļ������������***/

/** �ļ�I/O�Ļ����÷� **/

/* ��ʽ�����
* 1. չʾ setw() �� setfill() 
* a. setw() ֻ�Խ�����������������
* b. setfill() �ƶ�����ַ�
* 
* 2. չʾ setpresicion() ��fixed�� showpoint��left��right
* 3. չʾ hexfloat //16���Ʊ�ʾ

*/
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;

int main() {
	// 1
	//cout << std::setw(4) << std::setfill('*') << "a" << endl;

	// ���һ��ֱ��������
	cout << std::setfill('*');
	for (int i = 0; i < 5; i++) {
		cout << std::setw(i + 2)<< " " << endl;
	}

	//2
	double pi = 3.14159265358979;
	cout << std::setprecision(6) << pi << endl;
	cout << std::setprecision(6) << std::fixed << pi << endl;

	cout << std::setw(20) << std::left << pi << endl;
	cout << std::setw(20) << std::right << pi << endl;

	//3
	double y = 3.0;
	cout << std::hexfloat << y << endl;

	cout << std::defaultfloat;
	cout << y << endl;
	cout << std::showpoint << y << endl;

	cout << std::setprecision(4) << std::fixed << 3.14;
	return 0;
}