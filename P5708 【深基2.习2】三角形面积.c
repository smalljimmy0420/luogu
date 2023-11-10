#include <stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float p,f,l;
	printf("请输入三角形的三边长:");
	scanf("%d %d %d",&a,&b,&c);
	if (a+b>c&&a-b<c){
		p=(a+b+c)/2;
		f=p*(p-a)*(p-b)*(p-c);
		l=sqrt(f);
		printf("%.1f",l);
		}
	else{
		printf("你输入的三边无法构成三角形");
	}
	return 0; 
}
