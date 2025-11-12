#include<stdio.h>

int main(void)
{
	char str[] = "Hello Word !";
	int length;

	length = sizeof(str);
	
	printf("%s\n"
			"%d\n", str, length);
	
	return 0;
}
