#include <stdio.h>
int main()
{
	int height[10];
	int x,i;
	int count=0;
	for(i=1;i<=10;i++){
		printf("������ʮ��ƻ���ĸ߶�:");
		scanf("%d",&height[i]);
	}
	printf("���������յ����:");
	scanf("%d",&x);
	int y=x+30;
	for(i=1;i<=10;i++){
		if(y>=height[i]){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
