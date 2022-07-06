/***Unit09 模板初步***/

/** 函数模板 **/

/*
* 1. 编写函数模板 T add(T x， T y)并调用之
* 2. 修改上述函数模板为 auto add（T x， T y）并调用之
*/
#include <iostream>

template <typename T, typename Q>
auto add(T x, Q y) {
	return (x + y);
}

int main() {
	std::cout << add(4, 8.8) << std::endl;
	return 0;
}