/***Unit03 对象和类基础***/

/** Array 类 **/
#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void print(array<int, 3>& a) {
	for (auto x:a) {
		cout << x << " ";
	}
	cout << endl;
}
int main() {
	//1. 创建数组
	std::array a1{1, 2, 4};
	print(a1);


	//2. 为数组幅值
	a1 = {7,8,9};
	print(a1);

	//3. 交换数组
	array b1{100, 200, 300};
	a1.swap(b1);
	print(a1);
	print(b1);

	//4. 求数组大小
	cout << a1.size() << endl;
	cout << a1.max_size() << endl;

	//5. 编写search函数，在数组中查找一个值

	//6. sort()
	std::sort(a1.rbegin(), a1.rend());
	print(a1);

	//7. 二维数组
	std::array<array<int, 3>, 4> a6;

	return 0;

}