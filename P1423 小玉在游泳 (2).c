#include<stdio.h>

int main(){
	int flag=1;
	float x, step = 2.0, len=2.0;  //step记录单步步长， len记录游的总距离 
	scanf("%f", &x);
	if(x <= 2){            //一定要加个判断，特殊情况 
		printf("%d", flag);
	}
	else{
		while( len < x){
			step *= 0.98;   //单步步长
			len += step;  //游的总长
			flag += 1;  //步数
		}
		printf("%d", flag);
	}
	return 0;
} 
