/***Unit05 �̳кͶ�̬***/

/** �������붯̬����ת�� **/

/*
����1��������A����������/˽��/���� ��Աijk
����2��������Pub���м̳�A����Pro�����̳�A����Pri˽�м̳�A
	   �۲��������еĺ���foo�����Ի����Ա�ķ���
����3���۲�main���������������Ի����Ա�ķ���
*/

#include <iostream>
using std::cout;
using std::endl;

class A {
public:
	int i{ 0 };
protected:
	int j{ 0 };
private:
	int k{ 0 };
};

class Pub : public A {
public:
	void foo() { i++; j++; };
};

class Pro : protected A {
	void foo() { i++; j++; };
};

class Pri : private A {
	void foo() { i++; j++; };
};

int main() {
	Pub p;
	Pro pr;
	Pri pi;

	return 0;
}