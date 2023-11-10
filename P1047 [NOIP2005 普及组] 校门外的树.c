#include <stdio.h>
int main()
{
	int l,m;
	printf("请输入马路的长度和区域的数目:");
	scanf("%d %d",&l,&m);
	int t[l+1];
	int sum=l+1;
	int i,j;
	int a,b;
	for(i=0;i<=l;i++){
		t[i]=1;
	}
	for(i=1;i<=m;i++){
		printf("请输入起始点和终止点:");
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
