#include<stdio.h>
#include<math.h>
#include<ctype.h>
int main()
{
	char gradechar='\0';
	float hundredscore=0;
	printf_s("请输入五级成绩：");
	
	gradechar=islower(gradechar=getchar())?gradechar-32:gradechar;
	if(gradechar=='A')
		hundredscore=90;
		else if(gradechar=='B')
			hundredscore=85;
	else if(gradechar=='C')
	hundredscore=75;
	else if(gradechar=='D')
		hundredscore=65;
	else if(gradechar=='E')
		hundredscore=50;
	else
		hundredscore=0;
	if(fabs(hundredscore)<1e-10)
		printf_s("输入数据错误");
	else 
	printf_s("百分制成绩为：%.2f",hundredscore);
	return 0;
}
