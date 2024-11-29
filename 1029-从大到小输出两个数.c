#include<stdio.h>
int main()
{
int a,b;
printf("请输入两个整数(用空格隔开)：");
scanf("%d %d",&a,&b);
if(a>b)
printf("%d %d",a,b);
else
a<b;
printf("%d %d",b,a);
}
