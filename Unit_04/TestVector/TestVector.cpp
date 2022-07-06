/***Unit04 对象和类高级***/

/** c++ vector 类  **/
#include <iostream>
#include <vector>
#include <string>

inline void PRINT(std::vector<std::string> box) {
	for (auto item : box) {
		std::cout << item << " ";
	}
	std::cout << std::endl;
}

int main() {
	// 用c++11的列表初始化 创建Vector对象words1
	std::vector<std::string> word1{"hello", "world!", "toto"};
	PRINT(word1);

	// 删除words最后一个元素
	word1.pop_back();
	PRINT(word1);

	// 在words尾部追加元素
	word1.push_back("c++");
	PRINT(word1);

	// 用迭代器拷贝words1的内容以创建word2
	std::vector<std::string> word2(word1.begin()+1, word1.end());
	PRINT(word2);

	// 在word2中插入元素
	word2.insert(word2.begin(), "hello!!!");
	PRINT(word2);

	// 用拷贝构造创建words3
	std::vector<std::string> word3(word2);
	PRINT(word3);

	// 用[]修改words3元素
	word3[2] = "cpp";
	PRINT(word3);

	// 创建words4，初始化为多个相同的字串
	std::vector<std::string> word4(3, "c++");
	PRINT(word4);

	// words3与word4 交换
	word3.swap(word4);
	PRINT(word3);
	PRINT(word4);

	return 0;
}