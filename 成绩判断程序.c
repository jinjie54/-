#include<stdio.h>

int main(void)
{
	  float grade;
	  
	  printf("请输入你的成绩:");
	  scanf("%f", &grade);
	  
	  if (grade < 60)
	  {
	  	printf("不合格，再接再厉！"); 
	  }
	  else if (grade >= 60 && grade <= 100)
	  {
	  	printf("合格，继续保持！"); 
	  }
	  else
	  {
	  	printf("您貌似输错了，请检查数据是否正确！");
	  }

	
	return 0;
}
