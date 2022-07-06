/***Unit02 c语法的增强以及对应的c++ 11特性***/

/**1 引用，c++ 11 空指针与动态内存分配**/

/*引用:
1.引用是变量的别名；
2.引用可用作函数参数，但调用时只需传递普通变量即可，被调函数中改变引用变量的值，则改变的是实参的值；
*/
//pass by value 通过值来传参
#include <iostream>;
void swap_value(int x, int y) {
	int t;
	t = x;
	x = y;
	y = t;
}

//pass by pointer 通过指针传参
void swap_pointer(int* x, int* y) {
	int t;
	t = *x;
	*x = *y;
	*y = t;
}

//pass by reference 通过引用来传参
void swap_reference(int& x, int& y) {
	int t;
	t = x;
	x = y;
	y = t;
}

int main() {
	int a = 5;
	int b{ 10 };
	std::cout << "Before: a=" << a << "b=" << b << std::endl;

	swap_value(a, b);      //Before: a=5,b=10; After: a=5,b=10
	//swap_pointer(&a, &b); //Before: a=5,b=10; After: a=10,b=5
	//swap_reference(a, b);  //Before: a=5,b=10; After: a=10,b=5

	std::cout << "After: a=" << a << "b=" << b << std::endl;
	return 0;
}