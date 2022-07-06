/***Unit06 �ļ������������***/

/** �ļ�I/O�Ļ����÷� **/

/*
1. ���ļ�
a. �����ļ�����������source.txt
b. �� >> ���ļ�������

2. ʹ�� fail() ��������ļ��Ƿ񱻴�
3. �����ļ�������ѭ����ʹ�� eof() ��Ϊѭ������
�������ر��ļ�
*/
#include <fstream>
#include <iostream>
#include <filesystem>
#include <string>
using std::ifstream;
using std::ofstream;
using std::cout;
using std::endl;
using std::string;
namespace fs = std::filesystem;

int main() {
	fs::path p{"source.txt"};

	ifstream input{p}; //1a

	if (input.fail()) {
		cout << "can't open file" << p << endl;
		return 0;
	}

	string name{""}; 
	double score{0.0};

	/*
	input >> name >> score; // 1b
	cout << name << " " << score << endl;	
	input >> name >> score;
	cout << name << " " << score << endl;
	*/

	char x;
	while (!input.get(x).eof()) {
		cout << x;
	}

	return 0;
}