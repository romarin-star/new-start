#include<stdio.h>
int main()
{
	int n=0,sum=0,i=1;
	printf_s("请输入一个整数：");
	scanf_s("%d",&n);
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf_s("累加的值为：%d",sum);
	return 0;		
}
