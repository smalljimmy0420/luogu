#include <stdio.h>
#include <math.h>
#include<string.h>
int main()
{
	int w,x,h;
	printf("请输入立方体的长宽高:");
	scanf("%d %d %d",&w,&x,&h);
	int q,count=0;
	int sum=w*x*h;
	int square[21][21][21]={0};
//	for(int i=0;i<=w;i++){
//		for(int j=0;j<=x;j++){
//			for(int k=0;k<=h;k++){
//				square[i][j][k]=0;
//			}
//		}
//	}
	printf("请输入切割次数:");
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		int x1=0,x2=0,y1=0,y2=0,z1=0,z2=0;
		printf("请输入六个切割参数:");
		scanf("%d %d %d %d %d %d",&x1,&y1,&z1,&x2,&y2,&z2);
		for(int a=fmin(x1,x2);a<=fmax(x1,x2);a++){
			for(int b=fmin(y1,y2);b<=fmax(y1,y2);b++){
				for(int c=fmin(z1,z2);c<=fmax(z1,z2);c++){
					square[a][b][c]=1;
				}
			}
		}
	}
	for(int i=0;i<=w;i++){
		for(int j=0;j<=x;j++){
			for(int k=0;k<=h;k++){
				if(square[i][j][k]==1){
					count++;
				}
			}
		}
	}
	printf("%d",sum-count);
	return 0;
}
