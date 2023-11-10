#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,c,i;
	char m[100];
	scanf("%d",&a);//输入移动距离 
	c=a%26;//防止移动的数会太大 
	scanf("%s",&m);//输入原密码 
	b=strlen(m);//统计密码个数 
	for(i=0;i<b;i++)//依次加密 
	{
		if((m[i]+c)<='z') m[i]+=c;
		else m[i]+=(c-26);
	}
	printf("%s",m);//整体输出 
	return 0;
}
