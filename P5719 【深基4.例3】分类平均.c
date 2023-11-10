#include <stdio.h>
int main()
{
	int n,k,i;
	double sum=0;
	double count=0;
	double a=0;
	double b=0;
	double x,y;
	printf("请输入给定的范围n和需判断的类数:");
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++){
		if(i%k==0){
			sum+=i;
			a++;
		}
		else{
			count+=i;
			b++;
		}
	}
	x=sum/a;
	y=count/b;
	printf("%.1lf %.1lf",x,y);
	return 0;
} 
