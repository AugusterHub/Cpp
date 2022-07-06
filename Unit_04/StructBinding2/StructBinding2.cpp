/***Unit04 对象和类高级***/

/** 类/对象的 结构化绑定声明  **/
#include <iostream>

/*
1. 定义结构体和类
2. 以普通形式绑定结构体变量成员
3. 以引用形式绑定对象成员
*/

// 定义结构体
struct S{
	double s1{1.0};
	int s2{ 2 };
};

//定义类，包含int和字符数组成员
class C {
public:
	double c1{ 4.0 };
	char c2[3]{ 'a', 'b', '\0' };
};


int main() {
	// 定义结构体和类对象
	S s;
	C c;

	// 绑定结构体变量
	auto [a1, a2] {s};

	// 以引用形式绑定类对象成员
	auto& [b1, b2] {c};

	// 输出绑定的成员
	std::cout << a1 << " " << a2 << std::endl;
	std::cout << b1 << " " << b2 << std::endl;

	return 0;
}