/*1．调试程序，修改程序中的错误。
以下程序的功能是：随机产生2个[10,50]之间的整数a和b，
计算f=(a-b)/(a+b).a/b的值。运算结果按四舍五入保留4位小数存储到变量中。
调试运行下列程序，并改正“//”所在行错误，使其能够计算出正确的结果。
注意：不得增删程序代码行和程序结构。*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<math.h>
int main(){
	int a,b;
	float f;
	srand(time(0));
	a=rand()%41+10;
	b=rand()%41+10;
	f=(a-b)/(a+b)*b/a;//f=(a-b)/(float)(a+b)*b/a;
	f=(int)(f*10000+0.5)/10000;//四舍五入保留4位小数f=(int)(f*10000+0.5)/10000.0
	printf("a=%d,b=%d,f=%d\n",a,b,f);//printf("a=%d,b=%d,f=%.4f\n",a,b,f);
	getch();
	return 0;
}
