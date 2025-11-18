#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//存进去+读取 
	char ch[100];
	//FILE *fp = fopen("C:\\study\\计算机课程\\自己打着耍的\\测试文件IO.txt", "r");
	FILE *fp = fopen("text.txt", "w+");
	if (fp == NULL) {
		perror("\nerror:");
	}
	fprintf(fp, "测试！\n双击666老铁！\n猜猜我是谁？\n");
	rewind(fp);
	printf("你输入了：\n");
	while ((fgets(ch, sizeof(ch), fp)) != NULL) {
	printf("%s", ch);
	}
	
	fclose(fp);
	system ("notepad text.txt");//默认记事本打开
	
	//尝试修改
	FILE *fps = fopen("text.txt", "r+b");
	int count = 0;
	long position;
	if(fps == NULL) {
		perror("\nerror:");
	}
	while (count != 1) {
		fgets(ch, sizeof(ch), fps);
		position = ftell(fps);
		printf("位置：%ld", position);
		count++;
	}
	fseek(fps, position, SEEK_SET);
	fprintf(fps, "笑笑笑笑笑笑笑笑笑笑笑笑\n");
	fclose(fps);
	 
	system ("notepad text.txt");//默认记事本打开 

	return 0;
}
