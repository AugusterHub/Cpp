/***Unit05 �̳кͶ�̬***/

/** �̳й���  **/
// �̳��еĹ��캯��

#include <iostream>
using std::cout;
using std::endl;

/* ����1���̳й��캯�� 
   ��������B�Լ����캯��B��int���� B��char����������D��D�в��̳�/�̳�B��ctor��Ч��
  
   ����2���������е��û��๹�캯��
   D�����ӳ�Աdouble x���Լ�D��double����ʼ���б����B��i������ʼ��x

   ����3���������ȵ��û���ctor���ٹ�����Ƕ����
   ������E�Լ�E��int��������D�м���E���������󣻴�����D����۲�E ctor��B ctor����
*/

class B {
public:
	B() {
		cout << "B()" << endl;
	}
	B(int i) {
		cout << "B(" << i << ")" << endl;
	}
	B(char c) {
		cout << "B(" << c << ")" << endl;
	}
};

class E {
public:
	E() {
		cout << "E()" << endl;
	}
};

class D : public B {
public:
	// 1
	using B::B; //�̳й��캯��
	
	/*
	�ȼ���
	D() : B(){cout << "B()" << endl;}
	D(int i) : B(i) {cout << "B(" << i << ")" << endl;}
	D(cha c) : B(c) {cout << "B(" << c << ")" << endl;}
	*/

	// 2
	D() = default;
	D(double x) : e1{}, e2{}, B(static_cast<int>(x)), x{ 3.09 } {
		cout << "D(" << x << ")" << endl;
	}

private:
	double x{ 0.0 };
	E e1, e2;
};

int main() {
	B b;
	D d;
	D d1{3.09};

	return 0;
}