#include <stdio.h>
int main()
{
	int classmate;
	float milliliter;
	//printf("������һ���ж��ٺ����Ŀ��ַ�լˮ����Ҫ���ֵ�ͬѧ��:");
	scanf("%f %d",&milliliter,&classmate);
	printf("%.3f\n%d",milliliter/classmate,classmate*2); //��һ�����������Ϊ���ֺ�����  �ڶ�������Ϊ������ٱ��� 
	return 0;
	
}
