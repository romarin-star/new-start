#include<stdio.h>
int main()
{
	int num1=0,a=0,b=0,c=0;
	printf_s("请输入一个三位数：");
	scanf_s("%u",&num1);
	a=num1/100;
	b=(num1%100)/10;
	c=num1%10;
	printf_s("三位数的反序输出为:%d",a+b*10+c*100);
	return 0;
}
