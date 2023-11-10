#include <stdio.h>
int main()
{
	int n;
	printf("请输入要打印杨辉三角的行数:");
	scanf("%d",&n);
	int a[21][21]={0};
	a[0][1]=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i+1][j+1]=a[i][j]+a[i][j+1];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=n;j++){
			if(a[i][j]!=0){
				printf("%d ",a[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
} 
