#include <stdio.h>
#include <math.h>
int main()
{
	int h,r;
	double v;
	int q;
	//printf("������СԲͰ����Ⱥ͵���뾶:");
	scanf("%d %d",&h,&r);  //��λΪcm 
	v=3.14*r*r*h*pow(10,-3);  //Բͨ�����  
	q=20/v+1;
	printf("%d",q);
	return 0;
} 
