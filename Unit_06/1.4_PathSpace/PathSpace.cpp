/***Unit06 �ļ������������***/

/** c++17 ���ļ�ϵͳfileSystem **/

/*չʾ��λ�ȡ���̿ռ���Ϣ����
* ʹ��filesystem����space������������ȡĳ·�����ڷ�����
* space_info����Ȼ����ʾ���̷�����Ϣ
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