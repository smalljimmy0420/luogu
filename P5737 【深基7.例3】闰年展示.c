#include <stdio.h>
int rn(int x,int y){
	int n=0;
	int b[10000];
	for(int i=x;i<=y;i++){
		if((i%4==0 && i%100!=0)||(i%400==0)){
				n+=1;
				b[n]=i;	
			}
	}
	printf("%d\n",n);
	for(int i=1;i<=n;i++){
		printf("%d ",b[i]);
	}
	return 0;
}
int main()
{
	int x,y;
	printf("请输入年份的范围:");
	scanf("%d %d",&x,&y);
	rn(x,y);
	return 0;
}
