#include<stdio.h>

int main(void)
{
	int a, b, i, c;
	
	c = 0;
	a = 2;
	while (c != 1000)
	//for (a = 2; a <=100; a++)
	{
		b = 1;
		
		for (i = 2;i < a;i++)
		{
			if (a % i == 0)
			{
				b = 0; 
				break;
			}
		
			
			
		}
		if (b == 1)
			{
				printf("%d，", a);
				c++;
			}
		a++;
		
	}
	
	return 0;
}/*我真的快要哭死了，几个循环都把我搞混了！
下次得先把思路想好再写！！！！！！！！！*/ 
