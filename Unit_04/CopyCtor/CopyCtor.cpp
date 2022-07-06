/***Unit04 对象和类高级***/

/** 拷贝构造函数  **/

// 任务2：在栈和堆上分别创建Square对象

#include <iostream>
#include "square.h"
using namespace std;
int Square::numOfObjects = 0;

int main() {
	Square s1{ 1.0 };
	cout << s1.getNumberOfObjects() << endl;

	Square s2{ s1 }; // 栈 拷贝构造初始化
	cout << s2.getNumberOfObjects() << endl;

	Square* s3 = new Square{ s1 }; //堆 拷贝构造初始化
	cout << s3->getNumberOfObjects() << endl;
	
	delete s3;

	return 0;
}