/***Unit04 对象和类高级***/

/** 数组的 结构化绑定声明  **/
#include <iostream>
#include <array>

/*
1. 绑定原生数组成员
2. 绑定 std::array 数组成员
3. 以const修饰符绑定
4. 以引用类型绑定
*/

int main() {
	// 1
	int a[]{1, 2, 3};  //定义一个原生数组并初始化
	auto [e1, e2, e3] {a}; 
	std::cout << e1 << " " << e2 << " " << e3 << std::endl;

	// 2
	std::array aa{ 4, 5, 0 };
	auto [c1, c2, c3] {aa};

	// 3
	auto const [f1, f2, f3] {a};
	//f1 = 10; // const 绑定 f1值不能修改

	// 4
	auto& [b1, b2, b3] {a};
	b1 = 10;
	std::cout << a[0] << std::endl;

	return 0;
}
