#include <stdio.h>
int main()
{
	int a=5;    //本地配置一题所花费的时间
	int b=3;    //洛谷配置一题所花费的时间
	int c=11;   //创建预配置团队所需时间
	int n;
	int y,z;
	//printf("请输入你要配置的题目数量:");
	scanf("%d",&n); 
	y=5*n;
	z=11+3*n;
	if(y>z){
		printf("Luogu");
	}
	if(y<z){
		printf("Local");
	}
	return 0;
} 
