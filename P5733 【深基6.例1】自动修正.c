#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char a[101];
	char x;
	gets(a);
	int l=strlen(a);
	for(int i=0;i<l;i++){
		x=a[i];
		putchar(toupper(x));
	}
return 0;
}
