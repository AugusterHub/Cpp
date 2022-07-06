/***Unit05 继承和多态***/

/** 继承构造  **/
// 继承中的构造函数

#include <iostream>
using std::cout;
using std::endl;

/* 任务1：继承构造函数 
   创建基类B以及构造函数B（int）， B（char）和派生类D；D中不继承/继承B的ctor的效果
  
   任务2：派生类中调用基类构造函数
   D中增加成员double x；以及D（double）初始化列表调用B（i）并初始化x

   任务3：派生类先调用基类ctor，再构造内嵌对象
   增加类E以及E（int），并在D中加入E的两个对象；创建爱D对象观察E ctor和B ctor次序
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
	using B::B; //继承构造函数
	
	/*
	等价于
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