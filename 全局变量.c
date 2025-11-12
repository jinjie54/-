#include<stdio.h>

int number(void);

int main(void)
{
	int a = number();
	int b = number();
	
	printf("%d, %d\n", a, b);
	
	
	return 0;
}

int number(void)
{
	static int a = 0;//用static全局变量来统计函数的调用次数 
	a++;
	return a;
}
