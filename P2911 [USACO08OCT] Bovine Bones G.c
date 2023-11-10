#include <stdio.h>
int main()
{
	int x,y,z;
	printf("请输入三个骰子的面数:");
	scanf("%d %d %d",&x,&y,&z);
//	int s1[x];
//	int s2[y];
//	int s3[z];
//	int n=1;
	int m,max1;
	m=x+y+z+1;
	int sum[m];
	int a;
	int max=-100;
	for(int i=0;i<m;i++){
		sum[i]=0;
	}
//	for(int i=0;i<x;i++){
//		s1[i]=0;
//		n++	;
//	}
//	for(int i=0;i<y;i++){
//		s2[i]=n;
//		n++;
//	}
//	for(int i=0;i<z;i++){
//		s3[i]=n;
//		n++;
//	}
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			for(int k=0;k<z;k++){
				a=i+j+k+3;
				sum[a]+=1;
				if(sum[a]>max){
					max=sum[a];
					max1=a;
				}
				a=0;
			} 
		}
	}
	printf("%d",max1);
	return 0;
}
