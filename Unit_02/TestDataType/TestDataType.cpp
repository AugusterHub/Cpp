/***Unit02 c�﷨����ǿ�Լ���Ӧ��c++ 11����***/

/**2 ����������ת����c++ 11 �б��ʼ��**/

/*
1.ֱ���б��ʼ��

1.1 ����
int x{}; // ȱʡ�൱�ڳ�ʼ��0��int x = 0;
int y{3};// y = 3
1.1 ����
int array1[]{1, 2, 3};
char s1[3]{'o', 'k'}; //��ָ���б���3��ȱʡֵΪ0

2.�����б��ʼ��
2.1 ����
int x = {0};
2.2 ����
int array1[] = {1, 2, 3};

*/


#include <iostream>;

int main() {

	/* �б��ʼ�� */
	int x{ 1 }; //����һ��int����x����ʼ��Ϊ1����c�У� int x = 1��
	int y[]{ 11, 22, 33 };  //����һ��int����y����ʼ��Ϊ1��2��3����c�У�int y[] = {1,2,3}

	for (int i = 0; i < 3; i++)
	{
		std::cout << y[i] << std::endl;
	}
	std::cout << x << std::endl;

	/*ǿ������ת��*/
	std::cout << 1 / 2 << std::endl;
	std::cout << static_cast<double>(1) / 2 << std::endl;
	std::cout << static_cast<double>(1 / 2) << std::endl;

	return 0;
}