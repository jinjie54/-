#include<stdio.h>

int factorial(int);//必须有int也可以int base 但base会被忽略如果是空的话，是任意类型，void是不接受 

int main(void)
{
	int base;
	
	printf("请输入一个数：");
	scanf("%d", &base);
	
	printf("\n"
			"%d的阶乘为%d\n", base, factorial(base));
	
	return 0;
}

int factorial(int base)
{
	int answer, middle;
	
	answer = 1;//为了不改变answer，所以才设middle 
	
	for (middle = 1; middle <= base; middle++) {//居然又又又改变了不该变的变量，下次一定要注意啊 
		answer = answer * middle;
	}
	return answer;
}
