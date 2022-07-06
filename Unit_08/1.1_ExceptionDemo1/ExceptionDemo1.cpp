/***Unit08 异常处理***/

/** 异常处理概览 **/

/*
* 使用if语句处理被0除；
* 展示使用异常处理解决被0除的问题
*/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;



int main() {
	int x{ 0 }, y{ 0 };
	cin >> x >> y;

	try {            // try
		if (y == 0) {
			throw y; // 扔出一个异常
		}
		cout << static_cast<double>(x) / y << endl;
	}

	catch (int& e) { // 捕获异常(捕获的是数据类型)
		cout << "y is " << e << " runtime error" << endl;
	}

	return 0;
}