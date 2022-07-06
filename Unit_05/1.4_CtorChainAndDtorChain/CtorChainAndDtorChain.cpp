/***Unit05 �̳кͶ�̬***/

/** ��������������  **/
//����1��������ṹ��Computer->PC->Desktop/Laptop�Լ���Ӧ��ctor/dtor
//      main�д���Desktop/Laptop�Ķ���,�۲�ctor/dtor���ô���
//����2��������Camera��ΪLaptop����Ƕ����c������
//		main�д���Laptop���󣬹۲���Ƕ����c�Ĺ�������๹�����

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