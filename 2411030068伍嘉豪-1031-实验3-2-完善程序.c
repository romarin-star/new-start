/*2．调试程序，补充程序空缺内容。
计算机网络常见的分类依据是网络覆盖的地理范围，按照这种分类方法，
可将计算机网络分为广域网、城域网和局域网三类。
以下程序运行时，当输入整数1时输出“广域网”;
当输入整数2时输出“城域网”;
当输入整数3时输出“局域网”。
请完善程序，在标号位置填入正确的内容，使程序输出正确的结果。*/
#include<stdio.h>
int main(){
	int flag;
	printf("\n Please enter an integer");
	scanf("%d",&flag);
	if(/*【1<flag<3】*/)
		switch(flag){
		case 1:printf("\n广城网\n");
		/*【 break;】*/
		case 2:printf("\n城域网\n");
		break;
		case 3:/*【printf("\n局域网\n");】*/
	}
	else
		printf("Data wrong!!!\n");
	return 0;
}

