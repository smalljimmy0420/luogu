#include <stdio.h>
int main()
{
	int a[10000];
	int i=2;
	int x,j;
	printf("请输入你要验证冰雹猜想的数字:");
	scanf("%d",&x);
	a[1]=x;
	while(x!=1){
		if(x%2==0){
			x=x/2;
		}
		else{
			x=x*3+1;
		}
		a[i]=x;
		i++;
	}
	for(j=i-1;j>=1;j--){
		printf("%d",a[j]);
		printf(" ");
	}
	return 0;
}
