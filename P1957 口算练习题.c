#include <stdio.h>
int a(int x,int y){
	printf("%d+%d=%d\n",x,y,x+y);
	//int g=x+y;
	//char r="x+y=g";
	//printf(sizeof(r));
	return 0;
}
int b(int x,int y){
	printf("%d-%d=%d\n",x,y,x-y);
	//int g=x-y;
	//char r="x-y=g";
	//printf(sizeof(r));
	return 0;
}
int c(int x,int y){
	printf("%d*%d=%d\n",x,y,x*y);
	//int g=x*y;
	//char r="x*y=g";
	//printf(sizeof(r));
	return 0;
}
int main()
{
	int q;
	char w;
	int x,y;
	printf("�����빲�ж��ٸ���ʽ:");
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		printf("���������ʽ�ӵķ���:");
		scanf("%s",&w);
		if(w==a){
			printf("����������������:");
			scanf("%d %d",&x,&y);
			a(x,y);
		}
		else if(w==b){
			printf("����������������:");
			scanf("%d %d",&x,&y);
			b(x,y);
		}
		else if(w==c){
			printf("����������������:");
			scanf("%d %d",&x,&y);
			c(x,y);
		}
	}
	return 0;
}
