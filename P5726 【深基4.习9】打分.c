#include <stdio.h>
int main()
{
	int n;
	int max,min;
	int sum=0;
	double sum1,n1;
	int i=1;
	printf("��������ί������:");
	scanf("%d",&n);
	int a[n];
	for(i=1;i<=n;i++){
		printf("����������%d����ί�ķ���:",n);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	max=a[1];
	for(i=1;i<=n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	min=a[1];
	for(i=1;i<=n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	sum1=sum-min-max;
	n1=n-2;
	printf("%.2lf",sum1/n1);
	return 0;
}
