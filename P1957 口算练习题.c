#include <stdio.h>
int a(int x,int y){
	printf("%d+%d=%d\n",x,y,x+y);
	//int g=x+y;
	//char r="x+y=g";
	//printf(sizeof(r));
	return 0;
}
int b(int x,int y){
	printf("%d-%d=%d\n",x,y,x-y);
	//int g=x-y;
	//char r="x-y=g";
	//printf(sizeof(r));
	return 0;
}
int c(int x,int y){
	printf("%d*%d=%d\n",x,y,x*y);
	//int g=x*y;
	//char r="x*y=g";
	//printf(sizeof(r));
	return 0;
}
int main()
{
	int q;
	char w;
	int x,y;
	printf("请输入共有多少个算式:");
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		printf("请输入计算式子的符号:");
		scanf("%s",&w);
		if(w==a){
			printf("请输入计算的两个数:");
			scanf("%d %d",&x,&y);
			a(x,y);
		}
		else if(w==b){
			printf("请输入计算的两个数:");
			scanf("%d %d",&x,&y);
			b(x,y);
		}
		else if(w==c){
			printf("请输入计算的两个数:");
			scanf("%d %d",&x,&y);
			c(x,y);
		}
	}
	return 0;
}
