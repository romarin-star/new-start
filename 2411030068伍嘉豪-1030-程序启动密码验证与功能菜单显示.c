#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
	char ch1='\0',ch2='\0',ch3='\0';
	printf_s("请输入程序启动密码：");
	ch1=getch();putchar('!');
	ch2=getch();putchar('!');
	ch3=getch();putchar('!');
	
	if(ch1=='1',ch2=='2',ch3=='3'){
	printf_s("\n\t欢迎使用该系统\n\t1.输入数据\n\t2.处理数据\n\t3.输出报表\n\t0.退出系统\n");
	char x='\0';
	x=getch();
	switch (x) {
	case '1':
		printf_s("\n\t你选择的是功能1，按任意键继续");
		break;
	case '2':
		printf_s("\n\t你选择的是功能2，按任意键继续");
		break;
	case '3':
		printf_s("\n\t你选择的是功能3，按任意键继续");
		break;
	case '0':
		printf_s("\n\t程序即将退出，按任意键继续");
		break;
	default:
		printf_s("\n\t选择错误，请重新选择");
		break;
	}
	fflush(stdin);
	getch();
	}else{
		printf_s("\n程序启动密码错误！欢迎再试");
	}
	return 0;
}
