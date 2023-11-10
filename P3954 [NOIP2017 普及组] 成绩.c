#include <stdio.h>
int main()
{
	int A,B,C;
	int x;
	//printf("请输入牛牛的作业成绩、小测成绩、期末考试成绩:");
	scanf("%d %d %d",&A,&B,&C);
	x=A*0.2+B*0.3+C*0.5;
	printf("%d",x);  //牛牛的期末成绩 
	return 0;
} 
