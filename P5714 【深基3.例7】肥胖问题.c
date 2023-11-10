#include <stdio.h>
int main()
{
	double m;
	double h;
	double BMI;
	printf("请输入你的体重身高:");
	scanf("%lf %lf",&m,&h); 
	BMI=m/h/h;
	if(BMI<18.5){
		printf("Uderweight");
	}
	else if(BMI>=18 && BMI<24){
		printf("Normal");
	}
	else if(BMI>=24){
		printf("%.6g Overweight",BMI);
	}
	return 0;	
}
