/***Unit02 c语法的增强以及对应的c++ 11特性***/

/**4 特殊函数 a变量作用区域、b重载函数、c函数默认参数、d内联函数**/
#include <iostream>
using std::cout;
using std::endl;

auto max(int x, int y) {
	return x > y ? x : y;
}

auto max(int x, int y, int z) {
	return max(x, max(y, z));
}

int i{ 100 };
int main() {

	// 变量作用域
	for (int i = 0; i < 3; i++)
	{
		cout << i << endl;
		::i += i;
		cout << ::i << endl; // :: 一元域解析运算符，访问全局变量
	}

	// 重载函数
	cout << max(1, 2) << endl;
	cout << max(1, 2, 9) << endl;
	// 函数默认参数

	return 0;
}