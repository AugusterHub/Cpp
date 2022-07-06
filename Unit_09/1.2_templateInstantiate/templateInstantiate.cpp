/***Unit09 模板初步***/

/** 函数模板 **/

/*展示函数模板实例化的几种方式
*/

#include <iostream>
#include <string>
using namespace std::string_literals;

// 函数模板定义
template <typename T>
T max(T x, T y) {
	return (x > y ? x : y);
}
// 显式实例化：整数
template int max<int>(int, int);

int main() {
	// 调用显式实例化的函数
	std::cout << "max(1, 2): " << max(1, 2) << std::endl;
	// 浮点数实例化
	std::cout << "max(2.9, 1.0): " << max(2.9, 1.0) << std::endl;
	// 字符实例化
	std::cout << "max('A', 'D'): " << max('A', 'D') << std::endl;
	// 字符串字面量实例化
	std::cout << "max(\"ABD\", \"ABC\"): " << max("ABD", "ABC") << std::endl;
	std::cout << R"(max("ABC", "ABD"): )" << max("ABC", "ABD") << std::endl;
	// std::string 类型实例化
	//std::cout << R"(max("ABC"s, "ABD"s))" << max("ABC"s, "ABD"s) << std::endl;
	// 名字空间冲突问题
	return 0;
}