/***Unit08 异常处理***/

/** 异常匹配与内建异常类 **/

/*
展示内存分配失败抛出的bad_alloc异常类
*/
#include <iostream>
#include <exception>
#include <stdexcept>
#include <new>
using std::cout;
using std::endl;

int main() {
	try {
		for (int i = 0; i < 10000; i++){
			auto* ptr = new long long int[70000000];
			cout << i << " array" << endl;
		}
	}
	catch (std::bad_alloc& e){
		cout << e.what() << endl;
	}
	return 0;
}