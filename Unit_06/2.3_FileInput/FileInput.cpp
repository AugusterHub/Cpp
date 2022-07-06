/***Unit06 文件输入与输出流***/

/** 文件I/O的基本用法 **/

/*
1. 读文件
a. 创建文件输入流，打开source.txt
b. 用 >> 从文件读数据

2. 使用 fail() 函数检查文件是否被打开
3. 将读文件语句放入循环，使用 eof() 作为循环条件
其它：关闭文件
*/
#include <fstream>
#include <iostream>
#include <filesystem>
#include <string>
using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;
using std::string;
namespace fs = std::filesystem;

int main() {
	fs::path p{"source.txt"};

	ifstream input{p}; //1a

	if (input.fail()) {
		cout << "can't open file" << p << endl;
		return 0;
	}

	string name{""}; 
	double score{0.0};

	/*
	input >> name >> score; // 1b
	cout << name << " " << score << endl;	
	input >> name >> score;
	cout << name << " " << score << endl;
	*/

	char x;
	while (!input.get(x).eof()) {
		cout << x;
	}

	return 0;
}