#include <stdio.h>
int main()
{
	int l,m;
	printf("��������·�ĳ��Ⱥ��������Ŀ:");
	scanf("%d %d",&l,&m);
	int t[l+1];
	int sum=l+1;
	int i,j;
	int a,b;
	for(i=0;i<=l;i++){
		t[i]=1;
	}
	for(i=1;i<=m;i++){
		printf("��������ʼ�����ֹ��:");
		scanf("%d %d",&a,&b);
		for(j=a;j<=b;j++){
			t[j]=0;
		}
	}
	for(i=0;i<=l;i++){
		if(t[i]==0){
			sum--;
		}
	}
	printf("%d",sum);
	return 0;
}
