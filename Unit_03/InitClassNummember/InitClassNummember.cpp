/***Unit03 ����������***/

/** 3.4 �����ݳ�Ա�͵س�ʼ�� **/
#include <iostream>
using namespace std;

class X {
	int a = 10;
	int b = {10};
	int c{10};

	//int ar1[] = {1,2,3}; // error ���г�ʼ�����飬����ָ������
	int ar2[3] = {1,2,3};
	int ar3[3]{1,2,3};
	//auto ar4[]{ 1,2 }; // error auto���ܶ�������������ƶ�

	std::string s{'w','v'};
};

int main() {
	return 0;
}