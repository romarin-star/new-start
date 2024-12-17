#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<conio.h>
int main()
{
	while(1){
	
	system("cls");
		printf_s("\n\t欢迎使用该系统\n\t1.输入数据\n\t2.处理数据\n\t3.输出报表\n\t0.退出系统\n");
		char x='0';
		x=getchar();
		switch (x) {
		case '1':
			printf_s("\n\t你选择的是功能1，按任意键继续...");
			break;
		case '2':
			printf_s("\n\t你选择的是功能2，按任意键继续...");
			break;
		case '3':
			printf_s("\n\t你选择的是功能3，按任意键继续...");
			break;
		case '0':
			printf_s("\n\t程序即将退出，按任意键继续...");
			exit(0);
		}
	
		fflush(stdin);
	getch();
	}
	return 0;
}
