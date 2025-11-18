#include<stdio.h>
#include<string.h>
#include<stdlib.h>

 
struct Student {
	char name[10];
	struct Student *next;
};

int main(void)
{//静态链表 
	struct Student a, b, c, *p, *head;
	int num = 1;
	
	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	
	strcpy(a.name , "哈哈");
	strcpy(b.name , "lele");
	strcpy(c.name , "jiejie");
	
	
	
	p = head;//遍历输出 
	while (p != NULL) {
		printf("name%d=%s\n",  num, p->name);
		p = p->next;
		num++;
	}
	//动态链表
	char name_change[10];
	struct Student *q, *p1, *head1;
	q = p1 = (struct Student *)malloc(sizeof(struct Student));
	if (p1 == NULL) {
		printf("内存申请失败！\n");
	}
	printf("请输入：");
	scanf("%s", name_change);
	strcpy(p1->name, name_change);//输入数据 
	head1 = NULL;
	while (1) {
		if (strcmp(name_change, "0") == 0) {
			break;
		}
		if (head1 == NULL) {
			head1 = p1;
		} else {
			q->next = p1;
			q = p1;
			p1 = (struct Student *)malloc(sizeof(struct Student));
			if (p1 == NULL) {
				printf("内存申请失败！\n");
			}
			printf("请输入：");
			scanf("%s", name_change);
			strcpy(p1->name, name_change);//输入数据 
		}
	}
	q->next = NULL;
	
	printf("请输入要删除的数据：");
	scanf("%s", name_change);
	p1 = head1;
	while (strcmp(p1->name, name_change) != 0) {
		q = p1;
		p1 = p1->next;
	}
	
	q->next = p1->next;
	num = 1;
	p1 = head1;
	while (p1 != NULL) {
		printf("name%d=%s\n",  num, p1->name);
		p1 = p1->next;
		num++;
	}
	
	p = head1;
	while (p != NULL) {
		q = p;
		p = p->next;
		free(q);
	}
	
	return 0;
}
