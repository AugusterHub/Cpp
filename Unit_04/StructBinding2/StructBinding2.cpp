/***Unit04 �������߼�***/

/** ��/����� �ṹ��������  **/
#include <iostream>

/*
1. ����ṹ�����
2. ����ͨ��ʽ�󶨽ṹ�������Ա
3. ��������ʽ�󶨶����Ա
*/

// ����ṹ��
struct S{
	double s1{1.0};
	int s2{ 2 };
};

//�����࣬����int���ַ������Ա
class C {
public:
	double c1{ 4.0 };
	char c2[3]{ 'a', 'b', '\0' };
};


int main() {
	// ����ṹ��������
	S s;
	C c;

	// �󶨽ṹ�����
	auto [a1, a2] {s};

	// ��������ʽ��������Ա
	auto& [b1, b2] {c};

	// ����󶨵ĳ�Ա
	std::cout << a1 << " " << a2 << std::endl;
	std::cout << b1 << " " << b2 << std::endl;

	return 0;
}