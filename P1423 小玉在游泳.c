#include <stdio.h>
int main()
{
	double x=2.0;
	double sum=0.0;
	int i=0;
	double cnt;
	printf("请输入总共要游多少米:");
	scanf("%lf",&sum);
	if(sum<2.0){
		printf("1");
	}
	else{
		while(cnt!=sum){
		cnt+=x;
		x*=0.98;
		i++;
		if(cnt>=sum){
			printf("%d",i);
			goto out;
		}
		}
	}
	
	out:
	return 0;
}
