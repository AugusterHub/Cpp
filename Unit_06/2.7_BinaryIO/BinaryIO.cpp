/***Unit06 文件输入与输出流***/

/** 二进制的输入输出 **/

/* 
* 1. 将一个数组输出到二进制文件中
* 2. 读取二进制文件中的第一个整数显示在屏幕上
*/
#include <iostream>
#include <fstream>
#include <filesystem>
#include <array>

int main() {
	namespace fs = std::filesystem;
	using io = std::ios;
	fs::path p{"array.dat"}; 

	// 创建二进制输出流
	std::fstream out{p, io::out | io::app};
	// 判断流是否成功打开
	
	// 将一个整型数组的内容输出到二进制文件中
	std::array a{21, 42, 67};
	std::streamsize size = a.size() * sizeof(a[0]);
	out.write(reinterpret_cast<char*>(&a[0]), size);

	// 以读取模式重新打开二进制文件，或者将文件光标定位到文件头
	out.close();
	out.open(p, io::in);

	// 从二进制流中读入一个整数并显示到屏幕上
	auto x{0};
	out.read(reinterpret_cast<char*>(&x), sizeof(x));
	std::cout << x;

	return 0;
}