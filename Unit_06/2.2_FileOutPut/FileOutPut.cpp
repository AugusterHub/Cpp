/***Unit06 �ļ������������***/

/** �ļ�I/O�Ļ����÷� **/

/*
* 1. �����ļ��������
* 2. ���ļ�д����
* 3. �ر��ļ�
* 4. ���ı��༭�����ļ����Աȴ����������
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
	
	fs::path p{"source.txt"}; // ����·��

	ofstream output{p};  // 1

	double lileiScore{90.87};
	int hanmeimeiScore{84};

	output << "lileiScore " << lileiScore << endl; // 2
	output << "hanmeimeiScore " << hanmeimeiScore << endl;

	output.close(); // 3

	cout << "size of " << p << fs::file_size(p) << endl;
	return 0;
}