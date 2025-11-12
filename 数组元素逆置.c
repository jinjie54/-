#include<stdio.h>

int main(void)
{
	int numbers[20];
	int i, temp, j;//用于for 
	int count = 0;
	//输入 
	printf("请输入数字(-1退出):");
	for (i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
		scanf("%d", &temp);
		if (temp == -1) {
			break;
		}
		numbers[i] = temp;
		count++;
	}
	//输出 
	i = 0;
	j = count -1;
	do {
		temp = numbers[i];
		numbers[i] = numbers[j];
		numbers[j] = temp;
		i++;
		j--;
	} while (i < j);
	for (i = 0; i < count; i++) {
		printf("%d ", numbers[i]);
	}
	
	return 0;
}
