#include <stdio.h>
int main()
{
	float a;
	int count=0;
	printf("������ľ���ĳ���:");
	scanf("%d",&a);
	while(a>1){
		a/=2;
		count++;
	}
	printf("%d",count+1);
	return 0;
}
