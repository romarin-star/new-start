#include<stdio.h>
int main()
{
	int n=0,x=1,i=1;
	printf_s("请输入一个整数:");
	scanf_s("%d",&n);
	while(i<=n){
		x*=i;
		i++;
	}
	printf_s("累积是%d",x);
	return 0;
}
