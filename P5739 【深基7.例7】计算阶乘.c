#include <stdio.h>
int main()
{
	int n;
	int sum=1;
	printf("��������Ҫ����׳˵���:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		sum=sum*i;
	}
	printf("%d",sum);
	return 0;
}
