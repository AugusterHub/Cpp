/***Unit05 继承和多态***/

/** 抽象类与动态类型转换 **/

/*
任务1：创建类A，包括公有/私有/保护 成员ijk
任务2：创建类Pub公有继承A，类Pro保护继承A，类Pri私有继承A
	   观察三个类中的函数foo（）对基类成员的访问
任务3：观察main（）中三个类对象对基类成员的访问
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