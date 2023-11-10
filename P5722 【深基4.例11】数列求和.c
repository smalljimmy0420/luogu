#include <stdio.h>
int main()
{
	int a;
	int i;
	int sum=0;
	printf("请输入你要计算的n值数:");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		sum+=i;
	}
	printf("%d",sum);
	return 0;
} 
