/***Unit08 �쳣����***/

/** �Զ����쳣������ز��� **/

/*
* 1. ����Vec3D�࣬�� array ����������Ա��
* 2. ����RangeException��
*	 ���幹�캯��
*	 RangeException��std::size_t dimension,
					const int index��
  3. ʵ��Vec3D::operator[](const int index)
     ��indexԽ��ʱ���׳�VecException�Ķ���
  4. ���������д���Vec3D���󲢵��� [] ����Խ�����⣬
	 �����쳣������쳣�е���Ϣ��
*/

#include <iostream>
#include <exception>
#include "Vec3D.h"
using std::cout;
using std::endl;

//  4. ���������д���Vec3D���󲢵��� [] ����Խ�����⣬
//     �����쳣������쳣�е���Ϣ
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