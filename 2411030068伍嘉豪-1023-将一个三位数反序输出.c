#include<stdio.h>
int main()
{int a=0,b=0,c=0,d=0;
	printf_s("请输入一个三位数:");
	scanf_s("%d",&a);
	a=(a/100)+(a-(a/10)*10)*100+((a-(a/100)*100)/10)*10;
	printf_s("转化后的值为:%d",a);
	return 0;
}
