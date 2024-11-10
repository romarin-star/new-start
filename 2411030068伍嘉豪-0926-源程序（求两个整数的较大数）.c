//作者：2411030068伍嘉豪
//日期：2024-9-26
//版本：v1.0

#include<stdio.h>

int max (int,int);
	
int main()
{
	int a,b,c;
	
	printf_s("\n请从键盘输入两个整数：");
	
	scanf_s("%d%d",&a,&b);
	
	c=max(a,b);
	
	printf_s("\n%d与%d的和是:%d.",a,b,c);
	
	return 0;
	
}

int max(int x,int y)
{
	int z;
	
	if(x>y)
		z=x;
	
		else
	
		z=y;
		return(z);
}
