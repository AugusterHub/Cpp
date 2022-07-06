/***Unit09 ģ�����***/

/** ����ʾ���뷺�ͻ� **/

/*ѡ������
* 1. ��дѡ������Ĵ���
* 2. ��ѡ������Ĳ�����Ϊ std::array
*/
#include "selectionSort.h"

void selectionSort(double list[], const std::size_t size) {
	// for ѭ����ÿ�δ� list[i]~list[size-1] ���ҳ�һ����С��������list[i]����

	for (int i = 0; i < size-1; i++){
		// ��ʼ������ list[i]��Ϊ��Сֵ����i���Ϊ��Сֵ����
		double min = list[i];
		int index = i;

		// ��ѭ�����ҳ�list[i+1]~list[size-1]�е���Сֵ�������±�
		for (int j = i + 1; j < size; j++) {
			if (min > list[j]) {
				min = list[j];
				index = j;
			}
		}

		// ��list[i]������Сֵ����ô����list[i] �� list[index]
		if (index != i) {
			list[index] = list[i];
			list[i] = min;
		}

	}
}