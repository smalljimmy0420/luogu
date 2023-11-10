#include <stdio.h>
//#include <math.h>
int main()
{
	int n;
	double m;
	printf("请输入总共操作了几次:");
	scanf("%d",&n);
	//double a[n];
	//int t[n];
	int x[2000001]={0};
	for(int i=0;i<n;i++){
		double a=0.0;
		int t=0;
		//printf("请输入指定的两个数字实数a和正整数t:");
		//scanf("%lf %d",&a[i],&t[i]);
		printf("请输入指定的两个数字实数a和正整数t:");
		scanf("%lf %d",&a,&t);
		//for(int i=0;i<n;i++){}
		for(int j=1;j<=t;j++){
			int m=(int)(a*j);
			if(x[m]==0){
				x[m]=1;
			}
			else{
				x[m]=0;
			}
			m=0.0;
		}
	}
//	for(int i=0;i<n;i++){
//		for(int j=1;j<=t[i];j++){
//			int m=(int)(a[i]*j);
//			if(x[m]=0){
//				x[m]=1;
//			}
//			else{
//				x[m]=0;
//			}
//			m=0;
//		}
//	}
	for(int i=0;i<2000001;i++){
		if(x[i]==1){
			printf("%d",i);
			break;
		}
	}
	return 0;
}
