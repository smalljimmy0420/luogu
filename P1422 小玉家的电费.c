#include <stdio.h>
int main()
{
	double a=0.4463;
	double b=0.4663;
	double c=0.5663;
	int x;
	printf("请输入总共用电千瓦时:");
	scanf("%d",&x);
	if(x<=150){
		printf("%.1lf",x*a);
	}
	else if(x>=151 && x<=400){
		printf("%.1lf",(150*a+(x-150)*b));
	}
	else if(x>=401){
		printf("%.1lf",(150*a+250*b+(x-400)*c));
	}
	return 0;
}
