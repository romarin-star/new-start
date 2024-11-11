#include<stdio.h>
int main()
{
	int a=0,b=0;
	printf_s("请输入两个整数(请用空格间隔)：");
	scanf_s("%d %d",&a,&b);
	printf_s("交换前为a=%d b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf_s("交换后a=%d b=%d",a,b);
	return 0;
}
