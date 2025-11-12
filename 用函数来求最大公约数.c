#include"用函数来求解最大公约数.h"
#include<stdio.h>

int divisor(int, int);

int main(void)
{
	int number1, number2;
	
	printf("请输入两个正整数：");
	scanf("%d%d", &number1, &number2);
	
	printf("\n" 
			"%d和%d的最大公约数为%d\n", number1, number2, divisor(number1, number2));
	
	return 0;
}

int divisor(int number1, int number2)
{
	int divisor, middle, i = 1;//要初始化i 
	
	for (; i > 0;) {
		if (number1 < number2) {
			middle = number1;
			number1 = number2;
			number2 = middle;
		}//确保number1更大 
		if (number1 % number2 == 0) {
			divisor = number2;
			break;
		}
		i = number1 % number2;//多次取余可以得到最大公约数 
		number1 = number2;
		number2 = i;//要记住改变number的值 
		divisor = i;//i会等于零，所以用 divisor来输出
	}
	 
	return divisor;
}
