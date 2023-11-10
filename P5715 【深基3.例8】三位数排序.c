#include <stdio.h>
int main()
{
	int a,b,c;
	int d;
	//printf("请输入三个数字:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && b>c){
		printf("%d %d %d",c,b,a);
	}
	else if(a>b && c>a){
		printf("%d %d %d",b,a,c);
	}
	else if(a<b && b<c){
		printf("%d %d %d",a,b,c);
	}
	else if(a<b && c<a){
		printf("%d %d %d",c,a,b);
	}
	else if(b>c && c>a){
		printf("%d %d %d",a,c,b);
	}
	else if(b<c && c<a){
		printf("%d %d %d",b,c,a);
	}
	else if(a==b && b==c){
		printf("%d %d %d",a,b,c);
	}
	return 0;
}
