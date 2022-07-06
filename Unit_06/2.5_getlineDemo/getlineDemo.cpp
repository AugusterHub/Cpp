/***Unit06 文件输入与输出流***/

/** 文件I/O的基本用法 **/

/* 展示 istream::getline函数的用法
*  展示 std::getline函数的用法
*/

#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <filesystem>
using std::cout;
using std::endl;
using std::ifstream;
using std::string;

int main() {
	// 打开文件
	std::filesystem::path p{"greatwall.txt"};
	ifstream in{p};

	if (in.fail()) {
		cout << "can't open file" << p << endl;
		std::abort();
	}

	// istream：：getline（）函数
	//constexpr int SIZE = 1024;
	//std::array<char, SIZE> buf;
	//
	 
	//while (!in.eof()){
	//	in.getline(&buf[0], SIZE, '#');
	//	cout << &buf[0] << endl;
	//}
	
	// std：：getline（）函数
	std::string name1{""};

	while(!in.eof()) {
		std::getline(in, name1, '#');
		cout << name1 << endl;
	}
	return 0;
}