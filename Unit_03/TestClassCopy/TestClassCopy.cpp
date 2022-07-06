/***Unit03 对象和类基础***/

/** 2 类拷贝以及分离声明与实现 **/

#include <iostream>

class Square {
private:
	double side = 1.0;
public:
	Square()  = default; //c++ 11 强制编译器生成一个默认的构造函数
	Square(double side) {
		this->side = side;
	}

	double getAera() {
		return side * side;
	}
};

int main() {
	Square s1, s2{ 4.0 };

	std::cout << s1.getAera() << std::endl;
	std::cout << s2.getAera() << std::endl;	
	
	s1 = s2; // 对象拷贝
	
	std::cout << s1.getAera() << std::endl;
	std::cout << s2.getAera() << std::endl;


	return 0;
}