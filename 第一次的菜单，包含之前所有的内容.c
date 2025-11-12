#include<stdio.h>
#include<stdlib.h>//copy的 
#include<time.h>

int main(void)
{
	int choose;
	
	printf("请输入您希望的程序：\n"
			"1.hellow world\n"
			"2.打印三角形\n"
			"3.四则运算器（初级）\n"
			"4.交换两个变量的值\n"
			"5.输入一个字符，输出其ASCLL码\n"
			"6.判断奇偶性，闰年\n"
			"7.输入成绩，输出等级\n"
			"8.四则运算器（高级）\n"
			"9.计算1到100的累加（可以自定义）\n"
			"10.猜数字游戏\n"
			"11.输入一个整数，逆序输出\n"
			"12.打印九九乘法表\n"
			"13.打印100以内的所有素数\n"
			"14.打印素数（可控制个数）\n"
			"15.打印金字塔，菱形\n"
			"16.退出菜单"
			"\n" 
			"请输入您希望的程序：");
			
	scanf("%d", &choose);
	
	printf("\n");
	
	while (choose != 16)
	{
		switch (choose)
		{
			case 1:
				printf("Hello World!\n");
				break;
			case 2:
			{//case里定义变量需要加花括号，如果只有执行语句就不用
				while (getchar() != '\n');//丢弃缓存区的\n 
				char a;
				
				printf("请输入一个字母：");
				scanf("%c", &a);
					
				printf("  %c\n"
						" %c%c%c\n"
						"%c%c%c%c%c\n",
						a,							
						a, a, a,
						a, a, a, a, a);
				break;
			}
			case 3:
			{
				float first, second;
				
				printf("请输入两个数来进行四则运算："); 
				scanf("%f%f", &first, &second);
				
				printf("%.1f+%.1f=%.1f\n"
						"%.1f-%.1f=%.1f\n"
						"%.1f*%.1f=%.1f\n"
						"%.1f/%.1f=%.1f\n"
						, first, second, first + second
						, first, second, first - second
						, first, second, first * second
						, first, second, first / second);
				break;
			}
			case 4:
			{
				float first, second, middle;
				
				middle = 0;
				
				printf("请输入两个数：");
				scanf("%f%f", &first, &second);
				printf("first:%f, second:%f\n", first, second);
				
				middle = first;
				first = second;
				second = middle;
				
				printf("改变后：first:%f, second:%f\n", first, second);
				break;
			}
			case 5:
			{
				char word;
				
				printf("请输入一个字符：");
				while (getchar() != '\n');
				scanf("%c", &word);
				
				printf("你输入的字符%c的ASCLL码为: %d\n", word, word);
				break;
			}
			case 6:
			{
				int number1, number2;
				
				printf("请输入一个整数和一个年份：");
				scanf("%d%d", &number1, &number2);
				
				if (number1 % 2 != 0)
				{
					printf("%d是奇数\n", number1);
				}
				else
				{
					printf("%d是偶数\n", number1);
				}
				if (number2 % 4 != 0)
				{
					printf("%d不是闰年\n", number2);
				}
				else
				{
					printf("%d是闰年\n", number2);
				}
				break;
			}
			case 7:
			{
				float grade;
				
				printf("请输入您的成绩：");
				while (getchar() != '\n');
				scanf("%f", &grade);
				
				if (grade > 100)
				{
					printf("错误，请重新输入\n");
				} else if (grade > 80)
				{
					printf("优秀\n");
				} else if (grade > 60){
					printf("及格\n");
				} else if (grade > 0){
					printf("不及格\n");
				} else {
					printf("错误，请重新输入\n");
				}
				break;
			}
			case 8:
			{
				float number1, number2;
				char fuhao;
				
				printf("请输入您需要计算的式子：");
				while (getchar() != '\n');
				scanf("%f%c%f", &number1, &fuhao, &number2);
				
				switch (fuhao)
				{
					case '+':
						printf("%.1f+%.1f=%.1f\n", number1, number2, number1 + number2);
						break;
					case '-':
						printf("%.1f-%.1f=%.1f\n", number1, number2, number1 - number2);
						break;
					case '*':
						printf("%.1f*%.1f=%.1f\n", number1, number2, number1 * number2);
						break;
					case '/':
						printf("%.1f/%.1f=%.1f\n", number1, number2, number1 / number2);
						break;
				}
				break;
			}
			case 9:
			{
				int first, last, count;
				
				count = 0;
				printf("请输入累加的起始值和结束值：");
				scanf("%d%d", &first, &last);
				
				for (;first <= last;first++) {
					count = count + first;
				}
				printf("结果为：%d\n", count);
				break;
			}
			case 10: {//改了一下下格式，因为看AI说这种才是C的最常用格式，就是感觉不太好看，其实前面也有改的 
				srand(time(NULL));//copy copy!
				
				int number = rand() % 100 +1;//[a, b]范围：rand() % (b - a + 1) + a;
				int guess, order;
				
				order = 0;
				guess = 0;
				
				do {
					printf("请输入您的猜测：");
					scanf("%d", &guess);
					
					order++;
					
					if (guess > number) {
						printf("大了\n");
					}else if (guess < number) {
						printf("小了\n");
					}
				} while (guess != number);
				printf("恭喜您猜对了！共用了%d次\n", order);
				break;
			}
			case 11: {
				int number;
				
				printf("请输入一个数：");
				scanf("%d", &number);
				
				printf("他的逆序为：");
				if (number < 0){
					printf("-");
					number = -number;
				}
				
				do {
					printf("%d", number % 10);
					number = number / 10;
				} while (number != 0);
				printf("\n");
				break;
			}
			case 12: {
				int first, second;
				
				for (first = 1;first <= 9;first++){
					printf("_______________________________________________________________\n");
					printf("|");
					for (second = 1;second <= first;second++){
						printf("%d×%d=%d", first, second, first * second);//ALT加0215是乘号 
						printf("|");
					}
					printf("\n");
				}
				printf("_______________________________________________________________\n");
				break;
			}
			case 13: {
				int number, test_number, answer;
				
				//printf("输入一个数：");
				//scanf("%d", &number);
				for (number = 2;number <= 100;number++){
					answer = 0;
					
					for (test_number = 2;test_number < number;test_number++) {
						if (number % test_number == 0) {
							answer = 1;
							break;//break语句只会跳出最近的一层循环或switch结构而continue会跳出当前循环，进入下一个循环 
						}
					}
					if (answer == 0) {
						printf("%d，", number);
					}//else {
						//printf("%d不是素数\n", number);
					//}
				}	
				break;
			}
			case 14: {
				int number, count, judjement, want, answer;
				
				count = 0;
				number = 2;
				printf("请输入您想要的素数个数：");
				scanf("%d", &want);
				
				while (count != want) {
					answer = 0;
					for (judjement = 2;judjement < number;judjement++){
						if (number % judjement == 0) {
							answer = 1;
							break;
						}
					}
					if(answer == 0) {
						printf("%d,", number);
						count++;
					}
					number++;
				}
				break;
			}
			case 15: {
				int line, number, middle;
				char input;
				
				printf("请输入字符：");
				while (getchar() != '\n');
				scanf("%c", &input);
				printf("请输入列数：");
				scanf("%d", &line);
				
				for (number = 1;number <= line;number++) {
					for (middle = line - number;middle >= 1;middle--) {
						printf(" ");
					}
					for (middle = number * 2 - 1; middle >= 1;middle--) {
						printf("%c", input);
					}
					printf("\n");
				}
				
				for (number = 1;number <= line;number++) {
					for (middle = line - number;middle >= 1;middle--) {
						printf(" ");
					}
					for (middle = number * 2 - 1; middle >= 1;middle--) {
						printf("%c", input);
					}
					printf("\n");
				}
				for (number = 1;number <= line;number++) {
					for (middle = number;middle >= 1;middle--) {
						printf(" ");
					}
					for (middle = (line - number) * 2 - 1;middle >= 1;middle--) {
						printf("%c", input);
					}
					printf("\n");
				}
				break;
			}
			default: {
				printf("输错了，请重新输入！\n");
				break;
			}
		}
		printf("\n" 
				"请输入您希望的程序："); 
		scanf("%d", &choose);
	}
	printf("结束！！！您已经退出本菜单！\n");
	return 0;
}
