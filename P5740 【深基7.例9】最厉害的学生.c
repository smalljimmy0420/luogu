#include <stdio.h>
struct student{
	char a[1002];
};
int  main()
{
	int n;
	int t=0;
	printf("�����빲�ж���ѧ����");
	scanf("%d",&n);
	struct student stu[1002];
	int b[1002][4];
	int sum[1002]={0};
	for(int i=0;i<n;i++){
		//printf("������ѧ������:");
		scanf("%s",&stu[i].a);
		for(int j=0;j<3;j++){
			//printf("����������ѧ�����ġ���ѧ��Ӣ��ɼ�:");
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
