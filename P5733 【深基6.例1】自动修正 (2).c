#include <stdio.h>
int main()
{
	char a[101];
	int i=0;
	printf("ÇëÊäÈë×Ö·û´®:");
	gets(a);
	while(a[i]!=NULL){
		if(a[i]>=97 && a[i]<=122){
			a[i]=a[i]-32;
		}
		i++;
	}
	puts(a);
	return 0;
}
