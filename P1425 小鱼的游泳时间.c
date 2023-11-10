#include <stdio.h>
int main()
{
	int a,b;
	int c,d;
	int h,m; 
	//printf("开始的时间和结束的时间:");
	scanf("%d %d %d %d",&a,&b,&c,&d);  //本题中所给数字均按照24小时制 
	h=c-a;
	if(d-b<0){
		h=h-1;
		m=60-b+d;
		printf("%d %d",h,m);
	}
	else{
		m=d-b;
		printf("%d %d",h,m);
	}
	return 0;
}
