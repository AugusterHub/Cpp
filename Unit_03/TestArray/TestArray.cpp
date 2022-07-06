/***Unit03 ����������***/

/** Array �� **/
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
	//1. ��������
	std::array a1{1, 2, 4};
	print(a1);


	//2. Ϊ�����ֵ
	a1 = {7,8,9};
	print(a1);

	//3. ��������
	array b1{100, 200, 300};
	a1.swap(b1);
	print(a1);
	print(b1);

	//4. �������С
	cout << a1.size() << endl;
	cout << a1.max_size() << endl;

	//5. ��дsearch�������������в���һ��ֵ

	//6. sort()
	std::sort(a1.rbegin(), a1.rend());
	print(a1);

	//7. ��ά����
	std::array<array<int, 3>, 4> a6;

	return 0;

}