/***Unit06 文件输入与输出流***/

/** 随机访问文件 **/

/* 演示如何随机存取文件
* 1. 在文件中存2个long long int 和 “hello world”字符串
* 2. 从文件中读取hello字符串
*/
#include <iostream>
#include <fstream>
#include <filesystem>
#include <array>
#include <vector>

namespace fs = std::filesystem;
using std::cout;
using std::endl;
using std::fstream;

int main() {
	// 1. 
	fs::path p{"test.dat"};
	fstream file{p, std::ios::out | std::ios::in |std::ios::trunc};

	auto x{12LL}, y{24LL};
	char str[]{"hello world"};

	file.write(reinterpret_cast<char*>(&x), sizeof(x));
	file.write(reinterpret_cast<char*>(&y), sizeof(long long int));
	file.write(reinterpret_cast<char*>(str), sizeof(str));
	
	// 2.
	char buf[100]{ 0 }; //缓冲区
	file.seekg(2 * sizeof(long long int), std::ios::beg);
	file.read(buf, 5);
	std::cout << buf;

	return 0;
}