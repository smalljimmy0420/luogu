#include <stdio.h>
int main()
{
	int n;
	int sum=1;
	printf("第几天时只剩一个桃子:");
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		sum=sum+1;
		sum=sum*2;
	}
	printf("%d",sum);
	return 0;
}
