#include <stdio.h>
int main()
{
	int n;
	int i;
	printf("请输入数字的总个数:");
	scanf("%d",&n);
	int number[n];
	for(i=1;i<=n;i++){
		printf("请输入n个数字:");
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
