#include <stdio.h>
struct student{
	int xh[1002];
	int score,quality,zf;
	double total;
};
int main()
{
	int n;
	printf("�����빲�ж�����ѧ��:");
	scanf("%d",&n);
	struct student stu[1002];
	for(int i=0;i<n;i++){
		printf("������ѧ��:");
		scanf("%d",&stu[i].xh);
		printf("������ѧҵ�ɼ�:");
		scanf("%d",&stu[i].score);
		printf("������������չ����:");
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
