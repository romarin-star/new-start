#include<stdio.h>
int main()
{
	float sum=0,maxscore=00,minscore=10,score=0;
	int x=0,n=1;
	printf_s("评委的人数:");
	scanf_s("%d",&x);
	while(n<=x){
	printf_s("请输入第%d位评委的评分:",n);
		scanf_s("%f",&score);
		sum+=score;
	if (maxscore<score)
		maxscore=score;
	if(minscore>score)
		minscore=score;
		n++;
	}
	printf_s("评分为:%f",(sum-maxscore-minscore)/(x-2));
	return 0;
}
