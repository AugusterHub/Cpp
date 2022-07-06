/***Unit02 c语法的增强以及对应的c++ 11特性***/

/** 基于范围的for循环 **/

#include <iostream>
using namespace std;

int main() {
	int a[] = {1, 2, 3};

	// 访问数组a中的值
	for (auto i : a) {
		cout << i << endl;
	}

	// 修改数组a中的值
	for (auto& i : a) {
		i = i * i;
	}
	cout << a[2] << endl;

	return 0;
}
