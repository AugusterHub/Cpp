/***Unit05 �̳кͶ�̬***/

/** ��д������ʱ��̬ **/

/* ��̬
����1 ����A/B/C�����࣬B�̳�A��C�̳�B��ABC����toString��������
����2 ����print����������A���͵Ĳ���������A�����toString����
����3 ����print����������B/C���Ͳ���������toString��������
*/

/* չʾ����ʱ��̬
����4 ������A��toString()������Ϊ�麯��
����5 ��print�����Ĳ�����Ϊ����ָ������
		main�����е���print������ʵ��Ϊָ�����Ļ���ָ��
����6 ���һ��print����������Ϊ������������
		��main�����е���print����������Ϊ����Ļ�������

*/
#include <iostream>
#include <string>
class A {
public:
	virtual std::string toString() { return "A"; }
};

class B : public A {
public:
	std::string toString() { return "B"; }
};

class C : public B {
public:
	std::string toString() { return "C"; }
};

void print(A* o) {
	std::cout << o->toString() << std::endl;
}
void print(A& o) {
	std::cout << o.toString() << std::endl;
}

//void print(B o) {
//	std::cout << o.toString() << std::endl;
//}
//void print(C o) {
//	std::cout << o.toString() << std::endl;
//}

int main() {
	A a;
	B b;
	C c;
	A* p1 = &a;
	A* p2 = &b;
	A* p3 = &c;
	print(p1);
	print(p2);
	print(p3);	
	
	print(a);
	print(b);
	print(c);
	return 0;
}