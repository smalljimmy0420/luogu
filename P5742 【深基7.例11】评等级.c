#include <stdio.h>
struct student{
	int xh[1002];
	int score,quality,zf;
	double total;
};
int main()
{
	int n;
	printf("请输入共有多少名学生:");
	scanf("%d",&n);
	struct student stu[1002];
	for(int i=0;i<n;i++){
		printf("请输入学号:");
		scanf("%d",&stu[i].xh);
		printf("请输入学业成绩:");
		scanf("%d",&stu[i].score);
		printf("请输入素质拓展分数:");
		scanf("%d",&stu[i].quality);
	}
	for(int i=0;i<n;i++){
		stu[i].total=stu[i].score*0.70+stu[i].quality*0.30;
		stu[i].zf=stu[i].score+stu[i].quality;
	}
	for(int i=0;i<n;i++){
		if(stu[i].zf>140){
			if(stu[i].total>=80){
				printf("Excellent\n");
			}
		}
		else{
			printf("Not excellent\n");
		}
	}
	return 0;	
} 
