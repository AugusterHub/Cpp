/***Unit06 文件输入与输出流***/

/** c++17 的文件系统fileSystem **/

/*展示c++17 中的 path 对象用法
* int main（）｛
1. 定义路径，使用生字符串、转义字符串、正斜杠字符串
2. 输出默认文件分隔符
3. 判断是否是常规文件，如果是，输出文件大小
4. 判断是否是目录，如果是目录，列出其子目录
5. 判断路径是否存在
｝
*/
#include <iostream>
#include <string>
#include <filesystem>l

int main() {
	// 1
	namespace fs = std::filesystem;
	fs::path p1{"E:\\Aloha_world\\Unit_06\\1.1_CheckPath\\hello.txt"};
	fs::path p2{R"(E:/Aloha_world/Unit_06/1.1_CheckPath)"};
	fs::path p3{"E:/Aloha_world/Unit_06/1.1_CheckPath/hello.txt"};

	//2
	std::cout << "file separator is: " << fs::path::preferred_separator << std::endl;

	//3
	if (fs::is_regular_file(p2)) {
		std::cout << p2 << "'s size is " << fs::file_size(p2) << std::endl;
	}
	//4
	else if (fs::is_directory(p2)) {
		std::cout << p2 << "is a directory include: " << std::endl;
		for (auto& d : fs::directory_iterator(p2)) {
			std::cout << d.path() << std::endl;
		}
	}
	// 5
	else if (fs::exists(p2)){
		std::cout << p2 << "is a special file\n";
	}
	else {
		std::cout << p2 << "does not exist" << std::endl;
	}
	return 0;
}