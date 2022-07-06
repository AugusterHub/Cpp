/***Unit06 文件输入与输出流***/

/** c++17 的文件系统fileSystem **/

/*展示path相关的一些特殊运算符用法
* /= += /
*/

#include <iostream>
#include <filesystem>
using std::cout;
using std::endl;

int main() {
	namespace fs = std::filesystem;

	//定义路径
	fs::path p1{R"(C:\temp)"};
	fs::path p2{R"(C:\temp)"};
	fs::path p3{""};

	// append 和 /=
	p1.append(R"(users)"); //路径带“/”
	p1 /= R"(cyd)";

	cout << p1 << endl;
	// concat 和 +=
	p2.concat(R"(users)"); //路径不带“/”
	p2 += R"(cyd)";

	cout << p2 << endl;
	// 用运算符 / 拼凑一个新路径
	p3 = p3 / R"(C:\temp)" / R"(user)";
	cout << p3 << endl;
	return 0;
}