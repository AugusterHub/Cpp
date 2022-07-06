/***Unit05 继承和多态***/

/** 构造链与析构链  **/
//任务1：创建类结构：Computer->PC->Desktop/Laptop以及相应的ctor/dtor
//      main中创建Desktop/Laptop的对象,观察ctor/dtor调用次序
//任务2：增加类Camera作为Laptop的内嵌对象c的类型
//		main中创建Laptop对象，观察内嵌对象c的构造与基类构造次序

#include <iostream>
using std::cout;
using std::endl;

class Computer {
public:
	Computer() {
		cout << "Computer()" << endl;
	}
	~Computer() {
		cout << "~Computer()" << endl;
	}
};

class PC : public Computer {
public:
	PC() {
		cout << "PC()" << endl;
	}	
	~PC() {
		cout << "~PC()" << endl;
	}

};

class Laptop : public PC {
public:
	Laptop() {
		cout << "Laptop()" << endl;
	}
	~Laptop() {
		cout << "~Laptop()" << endl;
	}

};

class Desktop : public PC {
public:
	Desktop() {
		cout << "Desktop()" << endl;
	}
	~Desktop() {
		cout << "~Desktop()" << endl;
	}

};

int main() {

	Laptop L;
	Desktop D;
	return 0;
}