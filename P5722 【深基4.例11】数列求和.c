#include <stdio.h>
int main()
{
	int a;
	int i;
	int sum=0;
	printf("��������Ҫ�����nֵ��:");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		sum+=i;
	}
	printf("%d",sum);
	return 0;
} 
