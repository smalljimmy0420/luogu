#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	double a;
	double b;
	double c;
	printf("请输入指数n的值:");
	scanf("%d",&n);
	a=(1+sqrt(5))/2;
	b=(1-sqrt(5))/2;
	c=sqrt(5);
	printf("%.2lf",(pow(a,n)-pow(b,n))/c);
	return 0;
	
}
