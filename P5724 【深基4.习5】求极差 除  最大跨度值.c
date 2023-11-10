#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int x;
	int i;
	int max;
	int min;
	printf("请输入你要计算极差的数字个数:");
	scanf("%d",&x);
	int a[x];
	for(i=1;i<=x;i++){
		printf("请依次输入%d个数字",x);
		scanf("%d",&a[i]);
	}
	max=a[1];
	for(i=1;i<=x;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	min=a[1];
	for(i=1;i<=x;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("%d",max-min);
	return 0;
}
