#include <stdio.h>
#include <math.h>
int main()
{
	int m;
	double t,s;
	double d;
	int k;
	//printf("请输入共有多少苹果、一个苹果需要花费几分钟、时间过去几分钟:");
	scanf("%d %lf %lf",&m,&t,&s);
	if(t==0){
		printf("%d",0);
	}
	else if(m-s/t>0){
		d=s/t/1.0;
		k=ceil(d);
		//printf("%d",k);
		printf("%d",m-k); 
	}
	else{
		printf("%d",0);
	}
	return 0;
}
