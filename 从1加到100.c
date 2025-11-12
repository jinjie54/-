#include<stdio.h>

int main(void)
{
	int n, number;
	
	n = 1;
	number = 0;
	
	do
	{
		number = number + n;
		
		n++;
	}while (n <= 100);
	
	printf("%d\n", number);
	
	return 0;
}
