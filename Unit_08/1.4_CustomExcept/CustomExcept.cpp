/***Unit08 异常处理***/

/** 自定义异常类与多重捕获 **/

/*
* 1. 创建Vec3D类，用 array 保存向量成员；
* 2. 创建RangeException类
*	 定义构造函数
*	 RangeException（std::size_t dimension,
					const int index）
  3. 实现Vec3D::operator[](const int index)
     当index越界时，抛出VecException的对象
  4. 在主函数中创建Vec3D对象并调用 [] 制造越界问题，
	 捕获异常并输出异常中的信息；
*/

#include <iostream>
#include <exception>
#include "Vec3D.h"
using std::cout;
using std::endl;

//  4. 在主函数中创建Vec3D对象并调用 [] 制造越界问题，
//     捕获异常并输出异常中的信息
int main() {
	Vec3D v1{ 1.0, 2.0, 8.0 };
	try {
		cout << v1[4];
	}
	catch(std::exception& e){
		cout << "Exception: " << e.what() << endl;
	}
	
	return 0;
}