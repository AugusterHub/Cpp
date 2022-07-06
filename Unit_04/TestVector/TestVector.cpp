/***Unit04 �������߼�***/

/** c++ vector ��  **/
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
	// ��c++11���б��ʼ�� ����Vector����words1
	std::vector<std::string> word1{"hello", "world!", "toto"};
	PRINT(word1);

	// ɾ��words���һ��Ԫ��
	word1.pop_back();
	PRINT(word1);

	// ��wordsβ��׷��Ԫ��
	word1.push_back("c++");
	PRINT(word1);

	// �õ���������words1�������Դ���word2
	std::vector<std::string> word2(word1.begin()+1, word1.end());
	PRINT(word2);

	// ��word2�в���Ԫ��
	word2.insert(word2.begin(), "hello!!!");
	PRINT(word2);

	// �ÿ������촴��words3
	std::vector<std::string> word3(word2);
	PRINT(word3);

	// ��[]�޸�words3Ԫ��
	word3[2] = "cpp";
	PRINT(word3);

	// ����words4����ʼ��Ϊ�����ͬ���ִ�
	std::vector<std::string> word4(3, "c++");
	PRINT(word4);

	// words3��word4 ����
	word3.swap(word4);
	PRINT(word3);
	PRINT(word4);

	return 0;
}