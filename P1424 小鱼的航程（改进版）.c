#include <stdio.h>
int main()
{
	int x,n;
	int sum=0;    //小鱼总共游了多少公里
	int i;      
	printf("请输入小鱼从周几开始游泳并且游了几天:");
	scanf("%d %d",&x,&n);
	for(i=1;i<=n;i++){
		if(x==6){
			sum+=0;
			x++;
		}
		else if(x==7){
			sum+=0;
			x=1;
		}
		else{
			sum+=250;
			x++;
		}
	}
	printf("%d",sum);
	return 0;
}

