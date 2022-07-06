/***Unit06 �ļ������������***/

/** c++17 ���ļ�ϵͳfileSystem **/

/*չʾPath�������ڷֽ�·���ɷֵĺ���
* 
* �Ƿ���ڣ���������·�������·��?
* ��·�����ļ������ļ������ɣ���չ����
*/
#include <iostream>
#include <filesystem>
using std::cout;
using std::endl;

int main() {
	namespace fs = std::filesystem; //���ļ�ϵͳ�ռ���һ������

	//����·��
	fs::path p{R"(E:\Aloha_world\Unit_06\1.2_PathQuery\PathQuery.cpp)"};
	//�Ƿ���ڣ���������·�������·��?
	if (p.empty()) {
		cout << "path" << p << " is empty " << endl;
	}

	if (!fs::exists(p)){
		cout << "path" << p << " does not exist" << endl;
		std::exit(0); // �����˳�
	}

	
	cout << "root_name(): " << p.root_name() << "\n"
		<< "root_path(): " << p.root_path() << "\n"
		<< "relative_path(): " << p.relative_path() << "\n";
	
	// ��·�����ļ������ļ������ɣ���չ����
	cout << "parent_path(): " << p.parent_path() << "\n"
		<< "filename(): " << p.filename() << "\n"
		<< "stem(): " << p.stem() << "\n"
		<< "extension(): " << p.extension() << "\n";

	return 0;
}