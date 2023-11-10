/*
#include <stdio.h>
int main()
{
	int x;
	//printf("请输入你今天吃了几个苹果:");
	scanf("%d",&x);
	if(x==0 || x==1){
		printf("Today，I ate %d apple",x);
	}
	
	if(x>=2){
		printf("Today，I ate %d apples",x);
	}
	return 0;
}
*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if (n == 0 || n == 1)
		printf("Today, I ate %d apple.\n", n);
	else
		printf("Today, I ate %d apples.\n", n);
	return 0;
}
