#include <stdio.h>
int main()
{
	int x;
	//printf("请输入一个数字:");
	scanf("%d",&x);
	if(x%2==0 && x>4 && x<=12){
		printf("%d ",1);
	}
	else{
		printf("%d ",0); 
	}
	if(x%2==0){
		printf("%d ",1);
	}
	else if(x>4 && x<=12){
		printf("%d ",1);
	}
	else{
		printf("%d ",0);
	}
	if(x%2==0 && x>4 && x<=12){
		printf("%d ",0);
	}
	else if(x%2==0){
		printf("%d ",1);
	}
	else if(x>4 && x<=12){
		printf("%d ",1);
	}
	else{
		printf("%d ",0);
	}
	if((x%2!=0 && x<4)||(x%2!=0 && x>12)){
		printf("%d ",1);
	}
	else{
		printf("%d",0);
	}
	return 0;
} 
