#include <stdio.h>
#include <stdlib.h>
int main()
{
	int N;
	printf("�����빲�ж��ٸ�ͬѧ:");
	scanf("%d",&N);
	int a[N],b[N],c[N],sum[N];
	int x=0;
	int j,i;
	for(i=1;i<=N;i++){
		printf("����������ÿ��ͬѧ���� ��ѧ Ӣ��ĳɼ���");
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
		sum[i]=a[i]+b[i]+c[i];
		 
	}
	for(i=1;i<=N;i++){
		for(j=i+1;j<=N;j++){
			if(abs(a[i]-a[j])<=5){
				if(abs(b[i]-b[j])<=5){
					if(abs(c[i]-c[j])<=5){
						if(abs(sum[i]-sum[j])<=10){
							x++;
						}
					}
				}
			}
		}
	}
	printf("%d",x);
	return 0;
}
