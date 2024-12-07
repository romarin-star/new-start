/*1．调试程序，修改程序中的错误。
从键盘上输入一个字符，当该字符是英文字母时，
显示字符串“leter”；当该字符是数字时，显示字符串“digit”；
当该字符是空格时，显示字符串“space”；否则显示字符串“other”。
例如：当输入F时，输出：letter。
调试运行下列程序，并改正“//”所在行错误，使其能够计算出正确的结果。注意：不得增删程序代码行和程序结构。
注意：不得增行或删行，也不得更改程序的结构。*/
#include<stdio.h>
int main(){
	char flag,c;
	printf("\n Please enter a character");
	c=getchar();
	if(c>='a' && c<='z' || c>='A' && c<='Z')
		flag='a';
	else if(c>='0' && c<='9')
		flag='b';
	else if(c=' ')//else if(c='\t')
		flag='c';
	else
		flag='d';
	switch(flag){
		case 'a':printf("\n letter \n"); break;
	    case b  :printf("\n digit \n"); break;//case 'b':printf("\n digit \n");break;
	    case 'c':printf("\n space \n");//case 'c':printf("\n space \n");break;
		case 'd':printf("\n other \n");
	}
	return 0;
}

