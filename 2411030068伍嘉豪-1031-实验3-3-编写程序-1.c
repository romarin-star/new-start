/*3．编写程序
⑴已有如下所示的程序代码，
请用if-else if语句替换程序中的switch语句，
即用if-else if语句来构成程序中的选择结构。
要求：将修改后的程序调试正确，
并设计6组数据来测试选择结构的每一路选择是否能正确完成计算。
*/
#include<stdio.h>
int main(){
	char op;		//变量op存放运算符
	int x,y;		//变量x,y存放要计算的数据
	printf("*\n");
	printf("\n Please enter a operator ");
	scanf("%c",&op) ;		//输入运算符
	printf("\n Please input data ");
	scanf("%d%d",&x,&y) ;		//输入数据
//	switch(op){
//		case '+':printf("\n%d %c %d=%d\n",x,op,y,x+y) ;
//		break ;
//		case '-':printf("\n%d %c %d=%d\n",x,op,y,x-y) ;
//		break;
//		case '*':printf("\n%d %c %d=%d\n",x,op,y,x*y) ;
//		break;
//		case '/':printf("\n%d %c %d=%.2f\n",x,op,y,x*1.0/y) ;
//		break;
//		case '%':printf("\n%d %c %d=%d\n",x,op,y,x%y) ;
//		break;
//		default:printf("\n无效运算符\n") ;
//	}
	if(op=='+')
	{
		printf_s("\n%d %c %d=%d\n",x,op,y,x+y);
	}
	else if(op=='-')
	{
		printf("\n%d %c %d=%d\n",x,op,y,x-y) ;
	}
	else if(op=='*')
	{
		printf("\n%d %c %d=%d\n",x,op,y,x*y) ;
	}
	else if(op=='/')
	{
		printf("\n%d %c %d=%.2f\n",x,op,y,x*1.0/y) ;
	}
	else if(op=='%')
	{
		printf("\n%d %c %d=%d\n",x,op,y,x%y) ;
	}
	else 
		printf("\n无效运算符\n") ;
	return 0;
}
//改写程序（说明：改写后将上面程序注释）if(op=='+')
//输入6组数据：
/*
第一组：+ 60 85
结果：145
第二组：- 99 14
结果：85
第三组：* 96 58 
结果：5568
第四组：/ 95 5
结果：19
第五组：% 66 51
结果：15
第六组：（ 84 4
结果：无效运算符

分析：正确

*/

