#include <stdio.h>
#include <math.h>
int main()
{
	int h,r;
	double v;
	int q;
	//printf("请输入小圆桶的深度和底面半径:");
	scanf("%d %d",&h,&r);  //单位为cm 
	v=3.14*r*r*h*pow(10,-3);  //圆通的体积  
	q=20/v+1;
	printf("%d",q);
	return 0;
} 
