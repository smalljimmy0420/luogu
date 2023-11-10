#include <stdio.h>
#include <math.h>
double dis(double a,double b,double c,double d){
	double dis=sqrt((a-c)*(a-c)+(b-d)*(b-d));
	return dis;
}
int main()
{
	double q,w,e,r,t,y;
	double f,g,d;
	scanf("%lf %lf %lf %lf %lf %lf",&q,&w,&e,&r,&t,&y);
	double sum=0;
	d=dis(q,w,e,r);
	f=dis(e,r,t,y);
	g=dis(q,w,t,y);
	sum=d+f+g;
	printf("%.2lf",sum);
	return 0;
}
