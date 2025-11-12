#include<stdio.h>

void f(int*);//接受指针类型 

int main(void)
{
	int i;
	
	i = 6;
	
	printf("%p\n", &i);
	f(&i);
	printf("%d\n", i);
	
	return 0;
}

void f(int *p)
{
	printf("%p\n", p);
	*p = 10;
	printf("%d\n", *p);//要对应*p是指针地址里的值 
}
