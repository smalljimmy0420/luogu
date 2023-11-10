#include <stdio.h>
int main()
{
	int height[10];
	int x,i;
	int count=0;
	for(i=1;i<=10;i++){
		printf("请输入十个苹果的高度:");
		scanf("%d",&height[i]);
	}
	printf("请输入陶陶的身高:");
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
