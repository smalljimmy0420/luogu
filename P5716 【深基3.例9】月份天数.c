////闰年判断方法  能被4整除  不能被100整除  或者能被400整除 
#include <stdio.h>
int main()
{
	int y,m;
	printf("请输入年份和月份:");
	scanf("%d %d",&y,&m);
	if((y%4==0 && y%100!=0)||(y%400==0)){
		if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
			printf("%d",31);
		}
		else if(m==2){
			printf("%d",29);
		}
		else if(m==4 || m==6 || m==9 || m==11){
			printf("%d",30);
		}
	}
	else{
		if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
			printf("%d",31);
		}
		else if(m==2){
			printf("%d",28);
		}
		else if(m==4 || m==6 || m==9 || m==11){
			printf("%d",30);
		}
	}
	return 0;
}

/*
#include<stdio.h>
int main(){
	int year, month;
	scanf("%d%d", &year, &month);
	if( (year % 4 == 0 && year %100 !=0) || (year % 400 == 0)){
		if( month == 2 ){
			printf("29");
		}
		else if( month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
			printf("31");
		}
		else{
			printf("30");	
		}
	}
	else{
		if( month == 2 ){
			printf("28");
		}
		else if( month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
			printf("31");
		}
		else{
			printf("30");	
		}
	}
	return 0;
}
*/
