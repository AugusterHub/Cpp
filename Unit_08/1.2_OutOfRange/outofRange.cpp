/***Unit08 异常处理***/

/** 异常匹配与内建异常类 **/

/*
展示Vector抛出的out_of_range异常类
*/
#include <iostream>
#include <vector>
using std::cout;
using std::endl;

int main() {
	std::vector<char> v{'a', 'b'};
	try {
		for (int i = 0; i <= 2; i++) {
			cout << v[i] << endl;
			cout << v.at(i) << endl;
		}
	}
	catch (std::out_of_range& e) {
		cout << "expection: " << e.what() << endl;
	}
	return 0;
}