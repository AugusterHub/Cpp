/***Unit03 对象和类基础***/

/** 3.4 类数据成员就地初始化 **/
#include <iostream>
using namespace std;

class X {
	int a = 10;
	int b = {10};
	int c{10};

	//int ar1[] = {1,2,3}; // error 类中初始化数组，必须指定长度
	int ar2[3] = {1,2,3};
	int ar3[3]{1,2,3};
	//auto ar4[]{ 1,2 }; // error auto不能对数组进行类型推断

	std::string s{'w','v'};
};

int main() {
	return 0;
}