#include <stdio.h>
int main()
{
	int a=5;    //��������һ�������ѵ�ʱ��
	int b=3;    //�������һ�������ѵ�ʱ��
	int c=11;   //����Ԥ�����Ŷ�����ʱ��
	int n;
	int y,z;
	//printf("��������Ҫ���õ���Ŀ����:");
	scanf("%d",&n); 
	y=5*n;
	z=11+3*n;
	if(y>z){
		printf("Luogu");
	}
	if(y<z){
		printf("Local");
	}
	return 0;
} 
