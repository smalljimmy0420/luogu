#include <stdio.h>
int zs(int a){
	int c=1;
	if(a==1){
		c=0;
	}
	else{
		for(int i=2;i<a;i++){
			if(a%i==0){
				c=0;
				break;
			}
		}
	}

	if(c==1){
		printf("%d ",a);
	}
	return 0;
}     
int main()
{
	int x;
	printf("请输入共有多少个正整数:");
	scanf("%d",&x);
	int b[x];
	for(int i=0;i<x;i++){
		printf("请依次输入x正整数:");
		scanf("%d",&b[i]);
	}
	for(int i=0;i<x;i++){
		zs(b[i]);
	}
	return 0;
}
