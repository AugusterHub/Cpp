/***Unit06 文件输入与输出流***/

/** 文件I/O的基本用法 **/

/* 格式化输出
* 1. 展示 setw() 和 setfill() 
* a. setw() 只对紧随其后的数据起作用
* b. setfill() 制定填充字符
* 
* 2. 展示 setpresicion() 、fixed、 showpoint、left、right
* 3. 展示 hexfloat //16进制表示

*/
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;

int main() {
	// 1
	//cout << std::setw(4) << std::setfill('*') << "a" << endl;

	// 输出一个直角三角形
	cout << std::setfill('*');
	for (int i = 0; i < 5; i++) {
		cout << std::setw(i + 2)<< " " << endl;
	}

	//2
	double pi = 3.14159265358979;
	cout << std::setprecision(6) << pi << endl;
	cout << std::setprecision(6) << std::fixed << pi << endl;

	cout << std::setw(20) << std::left << pi << endl;
	cout << std::setw(20) << std::right << pi << endl;

	//3
	double y = 3.0;
	cout << std::hexfloat << y << endl;

	cout << std::defaultfloat;
	cout << y << endl;
	cout << std::showpoint << y << endl;

	cout << std::setprecision(4) << std::fixed << 3.14;
	return 0;
}