/***Unit06 �ļ������������***/

/** c++17 ���ļ�ϵͳfileSystem **/

/*չʾc++17 �е� path �����÷�
* int main������
1. ����·����ʹ�����ַ�����ת���ַ�������б���ַ���
2. ���Ĭ���ļ��ָ���
3. �ж��Ƿ��ǳ����ļ�������ǣ�����ļ���С
4. �ж��Ƿ���Ŀ¼�������Ŀ¼���г�����Ŀ¼
5. �ж�·���Ƿ����
��
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