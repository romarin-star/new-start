/*2.调试程序，补充程序空缺内容。
下列程序的功能是：求两个实数的乘积和商。
请完善程序，在标号位置填入正确的内容，使程序输出正确的结果。*/
#include<stdio.h>
float multi(float x,float y){
	return x*y;
}
float div(float x,float y){
	 //【 return x/y;】
}
int main(){
	float a,b,r1,r2;
	printf("请输入两个实数(a和b)：");
	scanf("%f%f",);//【&a,&b】
	r1=multi(a,b);
	 //【r2=div(a,b);】
	printf("a=%f,b=%f,r1=%f,r2=%f\n",a,b,r1,r2);
	return 0;
}
