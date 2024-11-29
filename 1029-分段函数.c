#include<stdio.h>
int main()
{
	int x,y;
	printf("输入整数x的值：");
	scanf_s("%d",&x);
	if (x<0)
		y=-1;
		else if(x==0)
			y=0;
	else
		y=1;
	printf_s("\ny的值为:%d",y);
	return 0;
}
