/*2．调试程序，补充程序空缺内容。
程序的功能是对整数进行加密和解密。
对任何整数，其密码自动产生过程如下：
①生成密码关键字母key，将整数用模数运算（求余运算）方式映射到大写字母上；
②密钥secret=key*100+key。加密：整数与密钥做异或运算；解密：密文和密钥做异或运算。
键盘输入任意整数，分别显示原文、密码关键字、密文、解密，示意数据加密解密过程。
请完善程序，在标号位置填入正确的内容，使程序输出正确的结果。*/
#include <stdio.h>
int main(){
	int origin/*明文*/,crypt/*密文*/,secret/*密钥*/;
	char key;
	printf("Input number：");
	scanf("%d",&origin);
	key=/*【'A'+(origin%26)】*/;
	secret=key*100+key;
	crypt=/*【origin^secret】*/;
	printf("明文=%d,密码关键字=%c\n",origin,key);
	printf("密文=%d,解密结果=%d\n",crypt,/*【crypt^secret】*/);
	getchar();
	return 0;
}
