#include <stdio.h>
#include<math.h>
int main()
{
	double a,b,c;
	double p,f,l;
	//printf("�����������ε����߳�:");
	scanf("%lf %lf %lf",&a,&b,&c);
	p=(a+b+c)/2;
	f=p*(p-a)*(p-b)*(p-c);
	l=sqrt(f);
	printf("%.1lf",l);
	return 0;
}
	
