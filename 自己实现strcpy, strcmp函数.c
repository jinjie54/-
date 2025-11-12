#include<stdio.h>

int main(void)
{
	char str1[20] = "hello world !", str2[20];
	char str3[20] = "good morning !";
	int i, j;//for
	int num1, num2;
	//strcpy函数 
	//fgets(str1, sizeof(str1), stdin);
	for (i = 0; str1[i] != '\0'; i++) {
		str2[i] = str1[i];
	}
	str2[i] = '\0';
	
	printf("%c\n"
		"%s\n", str1[0], str2);
	
	//strcmp函数'\0'是字符串的结尾 
	for (i = 0, num1 = 0; i < sizeof(str1); i++) {
		if (str1[i] == '\0') {
			break;
		}
		num1++;//用num计数，以免被改变 
		// 计算有多少个 
	}
	for (j = 0, num2 = 0; j < sizeof(str3); j++) {
		if (str3[j] == '\0') {
			break;
		}
		num2++;
		// 计算有多少个 
	}
	if (num1 > num2) {
		printf("正数\n");
	} else if (num1 == num2) {
		printf("0\n");
	} else {
		printf("负数\n");
	}
	printf("%d\n%d\n\n", num1, num2);
	
	return 0;
}
