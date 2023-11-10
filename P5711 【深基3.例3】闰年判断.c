#include <stdio.h>
int main()
{
	int x;
	//printf("请输入你想查询的年份:");
	scanf("%d",&x);
	if((x%4==0 && x%100!=0)||(x%400==0)){
		printf("%d",1);
	}
	else{
		printf("%d",0);
	}
	return 0;
}
//闰年判断方法  能被4整除  不能被100整除  或者能被400整除 
