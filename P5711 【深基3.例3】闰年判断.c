#include <stdio.h>
int main()
{
	int x;
	//printf("�����������ѯ�����:");
	scanf("%d",&x);
	if((x%4==0 && x%100!=0)||(x%400==0)){
		printf("%d",1);
	}
	else{
		printf("%d",0);
	}
	return 0;
}
//�����жϷ���  �ܱ�4����  ���ܱ�100����  �����ܱ�400���� 
