#include <stdio.h>
int main()
{
	int n;
	int i,j;
	int cnt=0;
	//printf("�ܹ��ж�����С��:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		//printf("����������С��Ŀɰ��̶�:");
		scanf("%d",&a[i]);
	}
	printf("%d ",0);
    for(i=1;i<n;i++){
        cnt=0;
        for(j=0;j<i;j++){
            if(a[i]>a[j])
            cnt++;
        }
		printf("%d",cnt);
		if(i<n){
			printf(" ");
		}
	}
}
