/***Unit08 �쳣����***/

/** �쳣ƥ�����ڽ��쳣�� **/

/*
չʾVector�׳���out_of_range�쳣��
*/
#include <iostream>
#include <vector>
using std::cout;
using std::endl;

int main() {
	std::vector<char> v{'a', 'b'};
	try {
		for (int i = 0; i <= 2; i++) {
			cout << v[i] << endl;
			cout << v.at(i) << endl;
		}
	}
	catch (std::out_of_range& e) {
		cout << "expection: " << e.what() << endl;
	}
	return 0;
}