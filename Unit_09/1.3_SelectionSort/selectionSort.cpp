/***Unit09 模板初步***/

/** 排序示例与泛型化 **/

/*选择排序
* 1. 编写选择排序的代码
* 2. 将选择排序的参数改为 std::array
*/
#include "selectionSort.h"

void selectionSort(double list[], const std::size_t size) {
	// for 循环，每次从 list[i]~list[size-1] 中找出一个最小的数，与list[i]交换

	for (int i = 0; i < size-1; i++){
		// 初始化，将 list[i]记为最小值，将i标记为最小值索引
		double min = list[i];
		int index = i;

		// 用循环，找出list[i+1]~list[size-1]中的最小值和它的下标
		for (int j = i + 1; j < size; j++) {
			if (min > list[j]) {
				min = list[j];
				index = j;
			}
		}

		// 若list[i]不是最小值，那么交换list[i] 和 list[index]
		if (index != i) {
			list[index] = list[i];
			list[i] = min;
		}

	}
}