/*1．调试程序，修改程序中的错误。
下列程序中，函数fun()的功能是：
从键盘输入一个圆的直径n，求出周长。例如，若n=2，则圆的周长为6.283180。
程序中标有注释符号“//”的行有错误，请修改，并在“//”后填写该行正确的全部内容，
使程序能得出正确的结果。注意：不得增删程序代码行和程序结构。*/
#include<stdio.h>
#define PI 3.14159;//#double PI 3.14159
double fun(int n){
	return PI*n;
}
int main(){
	int n//int n;
	double perimeter;
	printf("请输入圆的直径n：");
	scanf("%d",n);//scanf("%d",&n);
	perimeter=fun(n);
	printf("圆的直径为：%d，其周长为：%d。\n",n,perimeter);//printf("圆的直径为：%lf，其周长为：%lf\n",n,perimeter);
	return 0;
}
