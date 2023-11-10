#include <stdio.h>
int main()
{
	int M,N;
	int x;
	int a[10]={0};
	printf("请输入M和N的值:");
	scanf("%d %d",&M,&N);
	for(int i=M;i<=N;i++){
		int b=i;
		while(b>0){
			x=b%10;
			a[x]+=1;
			b=b/10;
		}
	}
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0; 
}
