#include <iostream>
#include "selectionSort.h"

int main() {
	double x[]{3.0, 2.0, 8.0, 4.0, 9.0, 1.0};
	
	for (auto i : x) {
		std::cout << i << " ";
	}
	std::cout << std::endl;

	selectionSort(x, sizeof(x) / sizeof(x[0]));

	for (auto i : x) {
		std::cout << i << " ";
	}
	std::cout << std::endl;

	return 0;
}