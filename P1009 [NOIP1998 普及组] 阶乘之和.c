#include <stdio.h>
int main()
{
	int n;
	int i,j;
	int d=1;
	int sum=0;
	printf("请输入你要计算的阶乘之和数量:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			d*=j;
		}
		sum+=d;
		d=1;
	}
	printf("%d",sum);
	return 0;
 } 
