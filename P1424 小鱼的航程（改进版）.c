#include <stdio.h>
int main()
{
	int x,n;
	int sum=0;    //С���ܹ����˶��ٹ���
	int i;      
	printf("������С����ܼ���ʼ��Ӿ�������˼���:");
	scanf("%d %d",&x,&n);
	for(i=1;i<=n;i++){
		if(x==6){
			sum+=0;
			x++;
		}
		else if(x==7){
			sum+=0;
			x=1;
		}
		else{
			sum+=250;
			x++;
		}
	}
	printf("%d",sum);
	return 0;
}

