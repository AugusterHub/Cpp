/***Unit02 c语法的增强以及对应的c++ 11特性***/

/**2 数据类型与转换，c++ 11 列表初始化**/

/*
1.直接列表初始化

1.1 变量
int x{}; // 缺省相当于初始化0，int x = 0;
int y{3};// y = 3
1.1 数组
int array1[]{1, 2, 3};
char s1[3]{'o', 'k'}; //可指定列表长度3，缺省值为0

2.拷贝列表初始化
2.1 变量
int x = {0};
2.2 数组
int array1[] = {1, 2, 3};

*/


#include <iostream>;

int main() {

	/* 列表初始化 */
	int x{ 1 }; //声明一个int变量x并初始化为1；如c中： int x = 1；
	int y[]{ 11, 22, 33 };  //声明一个int数组y并初始化为1，2，3；如c中：int y[] = {1,2,3}

	for (int i = 0; i < 3; i++)
	{
		std::cout << y[i] << std::endl;
	}
	std::cout << x << std::endl;

	/*强制类型转换*/
	std::cout << 1 / 2 << std::endl;
	std::cout << static_cast<double>(1) / 2 << std::endl;
	std::cout << static_cast<double>(1 / 2) << std::endl;

	return 0;
}