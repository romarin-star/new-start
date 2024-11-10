#include<stdio.h>
int main()
{
	float f=0,c=0;
	printf("\n请输入华氏温度：");
	scanf("%f",&f);
	c=5.0/9.0*(f-32);
	
	printf("\n摄氏度为：%f度",c);
	
	return 0;
	
}
