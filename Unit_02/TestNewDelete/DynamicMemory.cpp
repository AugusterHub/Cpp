/***Unit02 c�﷨����ǿ�Լ���Ӧ��c++ 11����***/

/**1 ���ã�c++ 11 ��ָ���붯̬�ڴ����**/

/*c++ 11 ��ָ���붯̬�ڴ����
* c++ 11�п�ָ���� nullptr��ʾ��c����NULL��ʾ��ָ�룻
* ��̬�ڴ�����new���ͷ�delete��c���������ڴ�malloc���ͷ�free������
*/

#include <iostream>
int main() {
	int* p = nullptr;
	int* q{nullptr}; //c++11 ��ʼ���б��д��

	p = new int(42);  //���ͱ��������ڴ棬����ֵ��ʼ��Ϊ42����ֵ��ָ�����p
	q = new int[ 4 ]; //�������������ڴ棬���鳤��Ϊ4����ֵ��ָ�����q

	std::cout << "Before: *p=" << *p << std::endl;
	*p = 24;
	std::cout << "After: *p=" << *p << std::endl;

	for (int i = 0; i < 4; i++){
		*(q + i) = 10 + i;
		std::cout << *(q + i) << std::endl;
	}

	delete p; //�ͷ��ڴ�
	delete [] q; //�����ͷ��ڴ��[]

	return 0;
}