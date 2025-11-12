#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	srand(time(NULL));
	
	int num = rand() % 100;
	int i, n;
	
	i = 0;
	n = 0;
	
	do
	{
		printf("请输入：");
		scanf("%d", &i);
		n++;
		
		if (i > num)
		{
			printf("大了!"); 
		}
		else if(i < num)
		{
			printf("小了！");
		}

	 } while (i != num);
	 
	 printf("对了！你一共试了%d次！", n);
		
	return 0;
}
