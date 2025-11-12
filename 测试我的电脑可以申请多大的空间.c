#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int count;//计数
	void *apply;//指针
	
	while (	(apply = malloc(100 * 1024 *1024)	)	) {
		count++;
//		if (count >= 1000) {
//			printf("超过安全限制！\n");
//			break;
//		}
	}
	printf("一共申请了%d00MB的空间\n", count);//44GB大概 
	
	return 0;
}
