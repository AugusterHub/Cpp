/***Unit06 文件输入与输出流***/

/** 文件I/O的基本用法 **/

/*
* 1. 创建文件输出流；
* 2. 向文件写数据
* 3. 关闭文件
* 4. 用文本编辑器打开文件，对比代码语句检查结果
*/

#include <iostream>
#include <fstream>
#include <filesystem>

using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;
namespace fs = std::filesystem;

int main() {
	
	fs::path p{"source.txt"}; // 创建路径

	ofstream output{p};  // 1

	double lileiScore{90.87};
	int hanmeimeiScore{84};

	output << "lileiScore " << lileiScore << endl; // 2
	output << "hanmeimeiScore " << hanmeimeiScore << endl;

	output.close(); // 3

	cout << "size of " << p << fs::file_size(p) << endl;
	return 0;
}