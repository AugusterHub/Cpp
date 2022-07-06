/***Unit03 对象和类基础***/

/** String 类 **/

#include <iostream>
#include <string>
using namespace std;

int main() {
	// 创建字符串
	string s{"Hello"};

	// clear()
	s.clear();

	// 用数组为字符串幅值
	char arr[]{'w','o','r','l','d'};
	s += arr;

	// assign（）
	s.assign("hello world!");

	// append()
	s.append("   ");
	s.append(1, ' ');

	// insert()
	s.insert(0, "   ");

	//移除字符串前面的空白
	s.erase(0, s.find_first_not_of(" \t\n\r"));

	//移除字符串后面的空白
	s.erase(s.find_last_not_of(" \t\n\r")+1);

	
	//将字符串转为整数或浮点数
	string s1{"121212"};
	int x = std::stoi(s1);

	string s2 = std::to_string(x);
	cout << x << endl;
	cout << s2 << endl;


	cout << s << endl;
	return 0;
}