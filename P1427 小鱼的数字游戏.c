#include <stdio.h>
int main()
{
	int a[101];
	int i;
	int x=0;
	for(i=1;;i++){
		printf("ÇëÒÀ´ÎÊäÈëÊý×Ö:");
		scanf("%d",&a[i]);
		if(a[i]==0)
			break;
		x++;	
	}
	for(i=x;i>=1;i--){
		printf("%d",a[i]);
		printf(" ");
	}
	return 0;
}
