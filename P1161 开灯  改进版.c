#include <stdio.h>
int main()
{
	int n=0;
	int x[2000000]={0};
	//printf("请输总共执行了几次:");
	scanf("%d",&n);
	int i=0;
	int j=0;
	for(i=0;i<n;i++){
		double a=0.0;
		int t=0;
		//printf("请输入实数a和整数t:");
		scanf("%lf %d",&a,&t);
		for(j=1;j<=t;j++){
			int m=0;
			m=(int)(a*j);
			if(x[m]==0){
				x[m]=1;
			}
			else{
				x[m]=0;
			}
		}
	}
	for(i=0;i<2000000;i++){
		if(x[i]==1){
			printf("%d",i);
			break;
		}
	}
	return 0;
}
