#include<stdio.h>

int main(void)
{
	int number;
	
	scanf("%d", &number);
	
	printf("%d%%d=%f\n", number, number + 5, number / (number + 5.0));//会输出12%d=17两个%会转义为一个%
	printf("%d%%%d=%f\n", number, number +5, number / (number + 5.0));//这样才对！ 
	
	return 0;
}
