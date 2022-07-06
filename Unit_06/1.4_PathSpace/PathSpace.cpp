/***Unit06 文件输入与输出流***/

/** c++17 的文件系统fileSystem **/

/*展示如何获取磁盘空间信息任务
* 使用filesystem：：space（）函数，获取某路径所在分区的
* space_info对象，然后显示磁盘分区信息
*/
#include <iostream>
#include <filesystem>

int main() {
	using std::cout;
	using std::endl;
	namespace fs = std::filesystem;

	fs::path p{"C:\\"};
	cout << "C total space " << fs::space(p).capacity << endl;
	cout << "C free space " << fs::space(p).free << endl;

	return 0;
}