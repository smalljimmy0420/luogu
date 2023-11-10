#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct student{
	char a[1002];
};
void paixu(struct student stu1,struct student stu2)
{
	if(strcmp(stu1.a,stu2.a) < 0)
	{
		printf("%s",stu1.a);
		printf(" %s",stu2.a);
	}	
	if(strcmp(stu1.a,stu2.a) > 0)
	{
		printf("%s",stu2.a);	
		printf(" %s",stu1.a);
	}
	printf("\n");
}
int main()
{
	int n;
	int b[1002][3];
	int sum[1002]={0};
	//printf("请输入学生考试人数:");
	scanf("%d",&n);
	struct student stu[1001];
	for(int i=0;i<n;i++){
		//printf("请输入学生的姓名:");
		scanf("%s",stu[i].a);
		for(int j=0;j<3;j++){
			//printf("请依次输入学生语文 数学、英语的成绩:");
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			sum[i]+=b[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
				if(abs(b[i][0]-b[j][0]<=5)){
					if(abs(b[i][1]-b[j][1]<=5)){
						if(abs(b[i][2]-b[j][2])<=5){
							if(abs(sum[i]-sum[j]<=10)){
								paixu(stu[i],stu[j]); 
							}
						}
					}
				}
			}
		}
	return 0;
}

