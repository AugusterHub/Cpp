/***Unit04 �������߼�***/

/** ����� �ṹ��������  **/
#include <iostream>
#include <array>

/*
1. ��ԭ�������Ա
2. �� std::array �����Ա
3. ��const���η���
4. ���������Ͱ�
*/

int main() {
	// 1
	int a[]{1, 2, 3};  //����һ��ԭ�����鲢��ʼ��
	auto [e1, e2, e3] {a}; 
	std::cout << e1 << " " << e2 << " " << e3 << std::endl;

	// 2
	std::array aa{ 4, 5, 0 };
	auto [c1, c2, c3] {aa};

	// 3
	auto const [f1, f2, f3] {a};
	//f1 = 10; // const �� f1ֵ�����޸�

	// 4
	auto& [b1, b2, b3] {a};
	b1 = 10;
	std::cout << a[0] << std::endl;

	return 0;
}
