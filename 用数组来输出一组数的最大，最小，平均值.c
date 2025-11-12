#include<stdio.h>

int main(void)
{
	int numbers[20] = {0};
	int i;
	int j;//i和j是用于for循环的 
	int number = 0;//中间用于替换 
	int sum;//不要用number用于多处，容易搞混 
	int count = 0;
	int temp;
	
	printf("请输入数字：（-1结束）");
	for (i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
		scanf("%d", &temp);
		if (temp == -1) {
			break;
		}
		numbers[i] = temp;
		count++;//记录数字个数 
	}
	
	for (i = 0; i < count - 1; i++) {//冒泡排序 
		for (j = 0; j < count - 1 -i; j++) {
			if (numbers[j] > numbers[j + 1]) {
				number = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j +1] = number;
			}
		} 
	}
	printf("最大值为：%d\n"
			"最小值为：%d\n"
			, numbers[count - 1], numbers[0]);
	
	for (i = 0, sum = 0; i < count; i++) {
		sum += numbers[i];
	}
	printf("平均数为：%g\n", (float)sum / count);
	
	return 0;
}
