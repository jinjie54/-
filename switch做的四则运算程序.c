#include<stdio.h>

int main(void)
{
	char type;
	double first;
	double second;
	
	scanf("%lf", &first);
	scanf("%c", &type);
	scanf("%lf", &second);
	 
	switch ( type )
	{
		case '+':
			printf("\n%.1lf+%.1lf=%.1lf\n", first, second, first + second);
			printf("hahaha\n");
			break;
		case '-':
			printf("\n%.1lf-%.1lf=%.1lf\n", first, second, first - second);
			break;
		case '*':
			printf("\n%.1lf*%.1lf=%.1lf\n", first, second, first * second);
			break;
		case '/':
			printf("\n%.1lf/%.1lf=%.1lf\n", first, second, first / second);
			break;
		default:
			printf("\nAre you kidding me ?\n");
			break;
	}
	
	return 0;
}
