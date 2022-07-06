/***Unit04 对象和类高级***/

/**  01 断言与常量表达式 **/
#include <iostream>
#include <array>
#include <cassert> // 使用assert（）断言须包含本头文件

using std::cout;
using std::endl;

//任务1：用递归计算factorial,用assert 检查3的阶乘
//任务2：将factorial 变成常量表达式，用static_assert检查3的阶乘
//任务3：创建 factorial（4）大小的数组

constexpr int factorial(int n) {
	if (n == 0)	{
		return 1; //error
	}
	else {
		return n * factorial(n - 1);
	}

}

int main() {

	static_assert(factorial(3) == 6, "factorial err");
	std::array<int, factorial(3)> a;
	cout << a.size();
	//cout << "3! = " << f << endl;
	return 0;
}