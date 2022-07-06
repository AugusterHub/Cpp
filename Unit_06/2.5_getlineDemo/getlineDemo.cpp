/***Unit06 �ļ������������***/

/** �ļ�I/O�Ļ����÷� **/

/* չʾ istream::getline�������÷�
*  չʾ std::getline�������÷�
*/

#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <filesystem>
using std::cout;
using std::endl;
using std::ifstream;
using std::string;

int main() {
	// ���ļ�
	std::filesystem::path p{"greatwall.txt"};
	ifstream in{p};

	if (in.fail()) {
		cout << "can't open file" << p << endl;
		std::abort();
	}

	// istream����getline��������
	//constexpr int SIZE = 1024;
	//std::array<char, SIZE> buf;
	//
	 
	//while (!in.eof()){
	//	in.getline(&buf[0], SIZE, '#');
	//	cout << &buf[0] << endl;
	//}
	
	// std����getline��������
	std::string name1{""};

	while(!in.eof()) {
		std::getline(in, name1, '#');
		cout << name1 << endl;
	}
	return 0;
}