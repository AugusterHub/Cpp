/***Unit03 ����������***/

/** String �� **/

#include <iostream>
#include <string>
using namespace std;

int main() {
	// �����ַ���
	string s{"Hello"};

	// clear()
	s.clear();

	// ������Ϊ�ַ�����ֵ
	char arr[]{'w','o','r','l','d'};
	s += arr;

	// assign����
	s.assign("hello world!");

	// append()
	s.append("   ");
	s.append(1, ' ');

	// insert()
	s.insert(0, "   ");

	//�Ƴ��ַ���ǰ��Ŀհ�
	s.erase(0, s.find_first_not_of(" \t\n\r"));

	//�Ƴ��ַ�������Ŀհ�
	s.erase(s.find_last_not_of(" \t\n\r")+1);

	
	//���ַ���תΪ�����򸡵���
	string s1{"121212"};
	int x = std::stoi(s1);

	string s2 = std::to_string(x);
	cout << x << endl;
	cout << s2 << endl;


	cout << s << endl;
	return 0;
}