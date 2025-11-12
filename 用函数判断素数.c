#include<stdio.h>

int judjement(int number);
int main(void) 
{
	int number;
	
	printf("请输入一个数：");
	scanf("%d", &number);//要判断的数 
	
	if (judjement(number) == 0) {
		printf("这是一个素数！\n");
	} else {
		printf("这不是一个素数！\n");
	}//0是素数，1不是素数 
	
	return 0;
}

int judjement (int number) 
{
	int judje;
	int answer = 0;//假设是素数 
	
	for (judje = 2; judje < number; judje++) {
		if (number % judje == 0) {
			answer = 1;//不是素数 
			break;
		}
	}
	return answer;
}
