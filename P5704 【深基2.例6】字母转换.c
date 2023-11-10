#include <stdio.h>
int main()
{
	char a=0;
	//printf("请输入你要转换成大写的字母:");
	scanf("%c",&a);           //注意用%c而不是%d 
	printf("%c",(int)a-32);   //小写字母和大写字母的ASCLL码相差为32 
	return 0;
}
