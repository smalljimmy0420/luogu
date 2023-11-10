#include <stdio.h>
int main()
{
	int classmate;
	float milliliter;
	//printf("请输入一共有多少毫升的快乐肥宅水和需要均分的同学数:");
	scanf("%f %d",&milliliter,&classmate);
	printf("%.3f\n%d",milliliter/classmate,classmate*2); //第一个输出的数字为均分毫升数  第二个数字为共需多少杯子 
	return 0;
	
}
