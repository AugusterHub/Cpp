/***Unit09 ģ�����***/

/** ����ģ�� **/

/*
* 1. ��д����ģ�� T add(T x�� T y)������֮
* 2. �޸���������ģ��Ϊ auto add��T x�� T y��������֮
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