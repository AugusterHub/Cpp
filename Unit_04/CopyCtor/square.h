#pragma once

// ����1����ӿ������캯����������������������Ϣ
class Square {

private:
	double side{ 1.0 }; // ʵ����Ա
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

	Square(const Square& s) {  // �������캯������
		this->side = s.side;  // ������s����Ϣ��������ǰ����
		numOfObjects++;
		std::cout << "Square(const Square&) is invoked" << std::endl;
	};
	 
	~Square() {              // ������������
		numOfObjects--;
	}

	static int getNumberOfObjects() {
		return numOfObjects;
	}
};