#include <stdio.h>
int main()
{
	double x=19;
	int a;
	int b;
	int y;
	int z;
	//printf("请输入给的钱数（元 角）:");
	scanf("%d %d",&a,&b);
	y=a*10+b;
	z=y/x;
	printf("%d",z);  //最多能买多少笔 
	return 0;
}
