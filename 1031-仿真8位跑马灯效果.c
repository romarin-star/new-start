#include<stdio.h>
#include <conio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	unsigned char LED_8=0;
	unsigned char switchLED=128;
	sleep(2);
	if((LED_8|switchLED)==(unsigned char)128)
	{
		system("cls");
		printf_s("\n●○○○○○○○");
	}
	sleep(1);
	switchLED=switchLED>>1;
	if((LED_8|switchLED)==(unsigned char)64)
	{
	system("cls");
		printf_s("\n○●○○○○○○");
	}
	sleep(1);
	switchLED=switchLED>>1;
	if((LED_8|switchLED)==(unsigned char)32)
	{
		system("cls");
		printf_s("\n○○●○○○○○");
	}
	sleep(1);
	switchLED=switchLED>>1;
	if((LED_8|switchLED)==(unsigned char)16)
	{
		system("cls");
		printf_s("\n○○○●○○○○");
	}
	sleep(1);
	switchLED=switchLED>>1;
	if((LED_8|switchLED)==(unsigned char)8)
	{
		system("cls");
		printf_s("\n○○○○●○○○");
	}
	sleep(1);
	switchLED=switchLED>>1;
	if((LED_8|switchLED)==(unsigned char)4)
	{
		system("cls");
		printf_s("\n○○○○○●○○");
	}
	sleep(1);
	switchLED=switchLED>>1;
	if((LED_8|switchLED)==(unsigned char)2)
	{
		system("cls");
		printf_s("\n○○○○○○●○");
	}
	sleep(1);
	switchLED=switchLED>>1;
	if((LED_8|switchLED)==(unsigned char)1)
	{
		system("cls");
		printf_s("\n○○○○○○○●");
	}
	sleep(1);
	switchLED=switchLED>>1;
	if((LED_8|switchLED)==(unsigned char)0)
	{
		system("cls");
		printf_s("\n○○○○○○○○");
	}
	getch();
	return 0;
}
