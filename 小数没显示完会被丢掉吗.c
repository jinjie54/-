#include <stdio.h>

int main (void)
{
	float a, b;
	a = 10;
	
	b = a/3;
	//b = 0;输出1.#FN00表示无穷大（除零）或浮点数溢出再或者是因为使用未初始化变量 
	
	printf("%f\n",a/b);
	
	a = b*3;
	
	printf("%f\n",a);
	
	return 0;
}
//结论：不会 
//其实并不是不会约掉，而是会四舍五入导致最后的结果巧合般地等于了正确答案 
