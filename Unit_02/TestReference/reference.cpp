/***Unit02 c�﷨����ǿ�Լ���Ӧ��c++ 11����***/

/**1 ���ã�c++ 11 ��ָ���붯̬�ڴ����**/

/*����:
1.�����Ǳ����ı�����
2.���ÿ���������������������ʱֻ�贫����ͨ�������ɣ����������иı����ñ�����ֵ����ı����ʵ�ε�ֵ��
*/
//pass by value ͨ��ֵ������
#include <iostream>;
void swap_value(int x, int y) {
	int t;
	t = x;
	x = y;
	y = t;
}

//pass by pointer ͨ��ָ�봫��
void swap_pointer(int* x, int* y) {
	int t;
	t = *x;
	*x = *y;
	*y = t;
}

//pass by reference ͨ������������
void swap_reference(int& x, int& y) {
	int t;
	t = x;
	x = y;
	y = t;
}

int main() {
	int a = 5;
	int b{ 10 };
	std::cout << "Before: a=" << a << "b=" << b << std::endl;

	swap_value(a, b);      //Before: a=5,b=10; After: a=5,b=10
	//swap_pointer(&a, &b); //Before: a=5,b=10; After: a=10,b=5
	//swap_reference(a, b);  //Before: a=5,b=10; After: a=10,b=5

	std::cout << "After: a=" << a << "b=" << b << std::endl;
	return 0;
}