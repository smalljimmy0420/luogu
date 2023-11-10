#include <stdio.h>
int main()
{
	int n;
	int z=0;
	int i,j;
	int x,y;
	printf("请输入小铭购买彩票的张数:");
	scanf("%d",&n);
	int a[33];
	int c[8];
	for(i=1;i<=33;i++){
		a[i]=0;
	}
	for(i=1;i<=7;i++){
		c[i]=0;
	}
	for(j=1;j<=7;j++){
		printf("请依次输入彩票中奖号码：");
		scanf("%d",&x);
		a[x]=1; 
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=7;j++){
			printf("请依次输入小铭购买的彩票号码:");
			scanf("%d",&y);
			if(a[y]==1){
				z++;
			}
		}
		c[7-z+1]++;
		z=0;
	}
	for(i=1;i<=7;i++){
		printf("%d ",c[i]);
	}
	return 0;
}
