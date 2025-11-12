#include<stdio.h>

int main(void) {
	int i, a, b, c, d;
	
	scanf("%d", &b);
	d = 1;
	
	printf("\n"); 
	//printf(牛逼*100);这个不行
	for (a = b - 1;a >= 1;a--) {
		for (i = 1;i <= a;i++) {
			printf("牛逼");
		}
		for (c = 1;c <= d;c++)
		printf("克拉斯");
		printf("\n");
		d += 2;
	}
	for (a = b - 1;a >= 1;a--) {
		for (i = 1;i <= a;i++) {
			printf(" ");
		}
		for (c = 1;c <= 1 + (b - (a + 1))*2;c++) {
			printf("*");
		}
		printf("\n");
	}
	for (;b >= 1;b--) {
		for (a)
	}
	
	return 0;
}
