/***Unit06 文件输入与输出流***/

/** 文件I/O的基本用法 **/

/*
1. 键盘输入一个字母后回车，实际进入缓冲的是2两个字符
2. 使用cin输入信息后，有换行字符残留在缓冲区，从而导致return语句前的 cin.get（）不起作用；
*/

#include <iostream>

int main() {
	// 拿到cin对象的缓冲区指针
	auto ptr = std::cin.rdbuf();

	// 从键盘读入字符到缓冲区，保留所有字符在缓冲区
	auto x = std::cin.peek();
	std::cout << " x = " << x << std::endl;

	// 显示缓冲区中的字符数量
	auto count = ptr->in_avail();
	std::cout << "There are " << count << " characters in the buffer " << std::endl;

	// 把缓冲区的字符都取出来并显示
	for (int i = 0; i < count; i++) {
		std::cout << i + 1 << ":" << std::cin.get() << std::endl;
	}

	std::cin.get();
	return 0;
}