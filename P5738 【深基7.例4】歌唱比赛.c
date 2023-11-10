#include <stdio.h>
int main()
{
	int n,m;
	//printf("�����빲�ж�����ͬѧ�μӱ����Ͷ�������ί�μӴ��:");
	scanf("%d %d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("������������ί�����ķ���:");
			scanf("%d",&a[i][j]);	
		}
	}
	int min[101],max[101];
	int sum[101]={0};
	double average[101];
	double g=-10;
	for(int i=0;i<n;i++){
		min[i]=11;
		max[i]=-10;
		for(int j=0;j<m;j++){
			if(min[i]>a[i][j]){
				min[i]=a[i][j];
			}
			if(max[i]<a[i][j]){
				max[i]=a[i][j];
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			sum[i]+=a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		sum[i]=sum[i]-min[i]-max[i];
		average[i]=sum[i]/(m-2)*1.0;
	}
	for(int i=0;i<n;i++){
		if(g<average[i]){
			g=average[i];
		}
	}
	printf("%.2lf",g);
	return 0;
}
