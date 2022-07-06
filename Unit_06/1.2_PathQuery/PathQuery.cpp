/***Unit06 文件输入与输出流***/

/** c++17 的文件系统fileSystem **/

/*展示Path类中用于分解路径成分的函数
* 
* 是否存在？根名？根路径？相对路径?
* 父路径？文件名？文件名主干？扩展名？
*/
#include <iostream>
#include <filesystem>
using std::cout;
using std::endl;

int main() {
	namespace fs = std::filesystem; //给文件系统空间起一个别名

	//定义路径
	fs::path p{R"(E:\Aloha_world\Unit_06\1.2_PathQuery\PathQuery.cpp)"};
	//是否存在？根名？根路径？相对路径?
	if (p.empty()) {
		cout << "path" << p << " is empty " << endl;
	}

	if (!fs::exists(p)){
		cout << "path" << p << " does not exist" << endl;
		std::exit(0); // 程序退出
	}

	
	cout << "root_name(): " << p.root_name() << "\n"
		<< "root_path(): " << p.root_path() << "\n"
		<< "relative_path(): " << p.relative_path() << "\n";
	
	// 父路径？文件名？文件名主干？扩展名？
	cout << "parent_path(): " << p.parent_path() << "\n"
		<< "filename(): " << p.filename() << "\n"
		<< "stem(): " << p.stem() << "\n"
		<< "extension(): " << p.extension() << "\n";

	return 0;
}