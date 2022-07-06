/***Unit02 c语法的增强以及对应的c++ 11特性***/

/**3 常量与指针**/

#include <iostream>;
using std::cout;
using std::endl;

void printArea(double radius = 1);
int main() {
	// 常量声明
	const int X = 6;

	// 常量不可变
	//X = 7;

	// 常量指针所指数据不可变
	int y = 2;
	const int* p = &X;
	//(*p) = 30;
	const int* q = &y;
	//(*q) = 90;

	// 指针常量不可变
	int* const r = &y;
	int z = 5;
	//r = &z;
	cout << *r << " " << y << endl;

	// 常指针常量
	const int* const s = &y;

	printArea();
	printArea(4);



	return 0;
}

void printArea(double radius) {
	cout << radius << endl;
}