#include <stdio.h>
int main()
{
	int a,b;
	int c,d;
	int h,m; 
	//printf("��ʼ��ʱ��ͽ�����ʱ��:");
	scanf("%d %d %d %d",&a,&b,&c,&d);  //�������������־�����24Сʱ�� 
	h=c-a;
	if(d-b<0){
		h=h-1;
		m=60-b+d;
		printf("%d %d",h,m);
	}
	else{
		m=d-b;
		printf("%d %d",h,m);
	}
	return 0;
}
