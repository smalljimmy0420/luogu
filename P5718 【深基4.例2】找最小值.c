#include <stdio.h>
int main()
{
	int n;
	int i;
	printf("���������ֵ��ܸ���:");
	scanf("%d",&n);
	int number[n];
	for(i=1;i<=n;i++){
		printf("������n������:");
		scanf("%d",&number[i]);
	}
	int min=number[1];
	for(i=1;i<=n;i++){
		if(number[i]<min){
			min=number[i];
		}
	}
	printf("%d",min);
	return 0;
}
