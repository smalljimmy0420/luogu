#include <stdio.h>
struct student{
	char name[1002];
	int age,score;
};
int main()
{
	int n;
	printf("请输入学员的数量:");
	scanf("%d",&n);
	struct student stu[10];
	for(int i=0;i<n;i++){
		printf("请输入学员的名字:");
		scanf("%s",&stu[i].name);
		printf("请输入学员的年龄:");
		scanf("%d",&stu[i].age);
		printf("请输入学员上学年NOIP的成绩:");
		scanf("%d",&stu[i].score);
	}
	for(int i=0;i<n;i++){
		stu[i].age+=1;
		stu[i].score=stu[i].score*1.2;
		if(stu[i].score>600){
			printf("%s %d 600",stu[i].name,stu[i].age);
		}
		else{
			printf("%s %d %d\n",stu[i].name,stu[i].age,stu[i].score);
		}
	} 
	return 0;
}
