#pragma once

// 任务1：添加拷贝构造函数、析构函数、添加输出信息
class Square {

private:
	double side{ 1.0 }; // 实例成员
	static int numOfObjects; // 静态成员

public:
	double getside() {
		return side;
	}

	void setSide(double side) {
		this->side = side;
	}

	Square(double side) {
		this->side = side;
		numOfObjects++;
	}

	Square() :Square(1.0) {};
	double getArea() {
		return side * side;
	}

	Square(const Square& s) {  // 拷贝构造函数声明
		this->side = s.side;  // 将对象s的信息拷贝到当前对象
		numOfObjects++;
		std::cout << "Square(const Square&) is invoked" << std::endl;
	};
	 
	~Square() {              // 创建析构函数
		numOfObjects--;
	}

	static int getNumberOfObjects() {
		return numOfObjects;
	}
};