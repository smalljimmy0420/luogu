#include <stdio.h>
int main()
{
	int a;
	int i;
	int j;
	int sum=0;
	int x=0;
	printf("��������Ҫ�õ����ʵ�����:");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		for(j=1;j<=i;j++){
			sum+=i;
			x++;
			if(x==a){
				goto out;
			}
		}
	}
	out:
	printf("%d",sum);
	return 0;
}
