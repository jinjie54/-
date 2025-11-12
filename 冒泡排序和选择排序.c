#include<stdio.h>

int main(void)
{
	int numbers[6] = {12, 13, 534, 76, 978, 1};
	int temp, i, j, min;//for
	//冒泡排序 
	for (i = 0; i < sizeof(numbers) / sizeof(numbers[0]) - 1; i++) {//比较count-1次 
		for (j = 0; j < sizeof(numbers) / sizeof(numbers[0]) - i -1; j++) {//比较相邻元素，每轮减少比较范围 
			if (numbers[j] > numbers[j + 1]) {//如果前一个大于后一个，就交换 
				temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;
			}
		}
	}
	//输出 
	for (i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
	//选择排序 
	for (i = 0; i <sizeof(numbers) / sizeof(numbers[0]) - 1; i++) {//也是进行count-1次比较 ，最后一个元素自动就位 
		min = i;//记录最小值的索引 
		for (j = i + 1; j < sizeof(numbers) / sizeof(numbers[0]); j++) {//要遍历所有值，除了第一个 ，剩余元素中寻找最小值 
			if (numbers[min] > numbers[j]) {
				min = j;//更新最小值的索引，但不立即交换 
			}
		}
		//一轮结束后才交换 
		if (min != i) {
			temp = numbers[min];
			numbers[min] = numbers[i];
			numbers[i] = temp;
		}
	}
	//输出 
	for (i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
	
	return 0;
}
