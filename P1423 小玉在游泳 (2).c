#include<stdio.h>

int main(){
	int flag=1;
	float x, step = 2.0, len=2.0;  //step��¼���������� len��¼�ε��ܾ��� 
	scanf("%f", &x);
	if(x <= 2){            //һ��Ҫ�Ӹ��жϣ�������� 
		printf("%d", flag);
	}
	else{
		while( len < x){
			step *= 0.98;   //��������
			len += step;  //�ε��ܳ�
			flag += 1;  //����
		}
		printf("%d", flag);
	}
	return 0;
} 
