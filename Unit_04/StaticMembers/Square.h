#pragma once
// 创建Squre类

class Square {
private:
	double side{1.0}; // 实例成员
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
	static int getNumberOfObjects() {
		return numOfObjects;
	}
};