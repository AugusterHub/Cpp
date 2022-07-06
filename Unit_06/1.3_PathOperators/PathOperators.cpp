/***Unit06 �ļ������������***/

/** c++17 ���ļ�ϵͳfileSystem **/

/*չʾpath��ص�һЩ����������÷�
* /= += /
*/

#include <iostream>
#include <filesystem>
using std::cout;
using std::endl;

int main() {
	namespace fs = std::filesystem;

	//����·��
	fs::path p1{R"(C:\temp)"};
	fs::path p2{R"(C:\temp)"};
	fs::path p3{""};

	// append �� /=
	p1.append(R"(users)"); //·������/��
	p1 /= R"(cyd)";

	cout << p1 << endl;
	// concat �� +=
	p2.concat(R"(users)"); //·��������/��
	p2 += R"(cyd)";

	cout << p2 << endl;
	// ������� / ƴ��һ����·��
	p3 = p3 / R"(C:\temp)" / R"(user)";
	cout << p3 << endl;
	return 0;
}