#include <stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float p,f,l;
	printf("�����������ε����߳�:");
	scanf("%d %d %d",&a,&b,&c);
	if (a+b>c&&a-b<c){
		p=(a+b+c)/2;
		f=p*(p-a)*(p-b)*(p-c);
		l=sqrt(f);
		printf("%.1f",l);
		}
	else{
		printf("������������޷�����������");
	}
	return 0; 
}
