#include <stdio.h>
int main()
{
	int n;
	int sum=1;
	printf("�ڼ���ʱֻʣһ������:");
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		sum=sum+1;
		sum=sum*2;
	}
	printf("%d",sum);
	return 0;
}
