/***Unit05 继承和多态***/

/** 覆写与运行时多态 **/

/* 多态
任务1 创建A/B/C三个类，B继承A，C继承B，ABC均有toString（）函数
任务2 创建print函数，接受A类型的参数，调用A对象的toString（）
任务3 重载print函数，接受B/C类型参数，调用toString（）函数
*/

/* 展示运行时多态
任务4 将基类A的toString()函数改为虚函数
任务5 将print函数的参数改为基类指针类型
		main（）中调用print函数，实参为指向对象的基类指针
任务6 添加一个print函数，参数为基类引用类型
		在main（）中调用print（），参数为对象的基类引用

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