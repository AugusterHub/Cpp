/***Unit08 �쳣����***/

/** �쳣ƥ�����ڽ��쳣�� **/

/*
չʾ�ڴ����ʧ���׳���bad_alloc�쳣��
*/
#include <iostream>
#include <exception>
#include <stdexcept>
#include <new>
using std::cout;
using std::endl;

int main() {
	try {
		for (int i = 0; i < 10000; i++){
			auto* ptr = new long long int[70000000];
			cout << i << " array" << endl;
		}
	}
	catch (std::bad_alloc& e){
		cout << e.what() << endl;
	}
	return 0;
}