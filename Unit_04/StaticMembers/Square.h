#pragma once
// ����Squre��

class Square {
private:
	double side{1.0}; // ʵ����Ա
	static int numOfObjects; // ��̬��Ա

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