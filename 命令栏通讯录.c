#include<stdio.h>
#include<string.h>

struct Contact {
	char name[20];
	char number[15];
};

struct Contact book[100];

int main(void)
{
	int select;//用来选择的变量 
	int i;//用来输出的变量
	int j, k;//用来删除的变量 
	char name[20];//同上 
	int count = 0;//记录联系人数量 
	int ch;//好习惯！=EOF使程序结束且返回-1 
//	struct Contact book[1];//前面的已经创建了100个变量了，这里会改变变量数 
	
	do {
		printf("\n\n""==== 通讯录 ====\n"
			"1. 添加联系人\n"
			"2. 查看所有联系人\n"
			"3. 删除联系人\n"
			"4. 退出\n"
			"请选择：");
//		while (getchar() != '\n');//清空缓存区，读取直到换行符 //这样的话第一次输入必须是回车才行 
		
		if (scanf("%d", &select) != 1/*主选择语句*/) {
			while ((ch = getchar()) != '\n' && ch != EOF);
			printf("请输入有效值！\n");
			continue;//跳到最后再进行下一轮循环 
		}
		
		switch (select)
		{
			case 1: {
				printf("\n请输入姓名：");
				scanf("%s", book[count].name);//简单的输入和计数 
				printf("\n请输入联系电话：");
				scanf("%s", book[count].number);
				count++;
				break;
			}
			case 2: {
				i = 0;
				if (count == 0) {//特殊情况 
					printf("\n                 您还没有联系人，快去添加一个吧！\n");
					break;
				}
				while (i != count) {//遍历输出 
					printf("\n                 === 联系人%d ===\n", i + 1);
					printf("                 姓名：%s\n"
						"                 电话：%s\n", book[i].name, book[i].number);
					i++;
				}
				break;
			}
			case 3: {
				printf("请输入您要删除的连系人：");
				scanf("%s", name);
				for (j = 0; j < count; ++j) {
					if (strcmp(book[j].name, name) == 0) {//指针指的值要用strcmp 
						for (k = j; k < count - 1; ++k) {//交换count-1次 
							strcpy(book[k].name, book[k + 1].name);//数组名不是变量，是常量指针！！ 
							strcpy(book[k].number, book[k + 1].number);//头文件string 
						}
						if (k == count - 1) {
//							strcpy(book[k].name,NULL);//strcpy传入NULL会让程序会立即崩溃！！！ 
//							strcpy(book[k].number,NULL);
							book[k].name[0] = '\n';
							printf("删除成功！\n");
							count--;
						}
					}
				}
				break;//case 3:用了一天的空余时间也是终于搞完了 
			}
			case 4: {
				break;//不会输出下面那一句了 
			}
			default : {
				printf("Are you kidding me ?\n");
				break;
			}
		}
	} while (select != 4);
	return 0;
}
