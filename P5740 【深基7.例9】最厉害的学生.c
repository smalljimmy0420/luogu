#include <stdio.h>
struct student{
	char a[1002];
};
int  main()
{
	int n;
	int t=0;
	printf("请输入共有多少学生：");
	scanf("%d",&n);
	struct student stu[1002];
	int b[1002][4];
	int sum[1002]={0};
	for(int i=0;i<n;i++){
		//printf("请输入学生姓名:");
		scanf("%s",&stu[i].a);
		for(int j=0;j<3;j++){
			//printf("请依次输入学生语文、数学、英语成绩:");
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			sum[i]+=b[i][j];
		}
	}
	int max=-1;
	for(int i=0;i<n;i++){
		if(sum[i]>max){
			max=sum[i];
			t=i; 
		}
	}
	//printf("%s %d %d %d",a[t],b[t][0],b[t][1],b[t][2]);
	printf("%s %d %d %d",stu[t].a,b[t][0],b[t][1],b[t][2]);
	return 0;
}
