#include<stdio.h>

int main(void)
{
	int a;
	int r = 0;
	
	//a = 700;
	printf("请输入:");
	scanf("%d", &a);
	printf("结果是:");
	
	do
	{
		r = a%10 + r*10;
		printf("%d", r);
		a = a/10;
	}while (a != 0);
	
	//printf("结果是:%d", r);
	
	return 0;
}
	
