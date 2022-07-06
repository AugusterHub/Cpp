/***Unit03 ����������***/

/** 2 �࿽���Լ�����������ʵ�� **/

#include <iostream>

class Square {
private:
	double side = 1.0;
public:
	Square()  = default; //c++ 11 ǿ�Ʊ���������һ��Ĭ�ϵĹ��캯��
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
	
	s1 = s2; // ���󿽱�
	
	std::cout << s1.getAera() << std::endl;
	std::cout << s2.getAera() << std::endl;


	return 0;
}