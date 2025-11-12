#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student {
	char name[10];
	char gender[3];
	int classnumber;
	int grade;
};

int main(void)
{
	char na[10], ge[3];
	int cl, gr;
	int i = 0;
		
	struct Student student[10];
		
	while (i < 10) {
		
		printf("姓名：");
		scanf("%s", na);
		printf("性别：");
		while (getchar() != '\n');
		scanf("%s", ge);
		printf("班级：");
		scanf("%d", &cl);
		printf("成绩：");
		scanf("%d", &gr);
	
		strcpy (student[i].name, na);
		strcpy (student[i].gender, ge);
		student[i].classnumber = cl;
		student[i].grade = gr;
		i++;
	}
	i = 0;
	printf("姓名	性别	班级	成绩\n");
	
	while (i < 10) {
		printf("%s"
		"	%s"
		"	%d"
		"	%d\n", student[i].name, student[i].gender, student[i].classnumber, student[i].grade);
		i++;
	}
	return 0;
}
