#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,c,i;
	char m[100];
	scanf("%d",&a);//�����ƶ����� 
	c=a%26;//��ֹ�ƶ�������̫�� 
	scanf("%s",&m);//����ԭ���� 
	b=strlen(m);//ͳ��������� 
	for(i=0;i<b;i++)//���μ��� 
	{
		if((m[i]+c)<='z') m[i]+=c;
		else m[i]+=(c-26);
	}
	printf("%s",m);//������� 
	return 0;
}
