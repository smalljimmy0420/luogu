#include <stdio.h>

int main(){
    int a1,a2,a3;//�������볤���
    scanf("%d %d %d",&a1,&a2,&a3);
    int sum=a1*a2*a3;//��������
    int m[101][20][101]={0};//��ά����ÿ�������ʼ��Ϊ0
    int b,count=0;//�������ݵ���Ŀ  ����
    scanf("%d",&b);
    for(int i=0;i<b;i++){//����b������
        int c1,c2,c3,c4,c5,c6;//ÿ��6����
        scanf("%d %d %d %d %d %d",&c1,&c2,&c3,&c4,&c5,&c6);
        for(int j=c1;j<=c4;j++){//����c1~c4�����м�
            for(int k=c2;k<=c5;k++){//����c2~c5�����м�
                for(int l=c3;l<=c6;l++){//����c3~c6�����м�
                    m[j][k][l]=1;//������걻���ʣ��ͼ�¼Ϊ1
                }
            }
        }
    }
    for(int j=0;j<101;j++){//����������ÿһ�������Ƿ񱻷��ʹ�������������˾�Ϊ1����1�ĸ���
        for(int k=0;k<20;k++){
            for(int l=0;l<101;l++){
                if(m[j][k][l]==1){
                    count++;
                }
            }
        }
    }
    printf("%d",sum-count);//�������ȥ����Ϊʣ������
    return 0;
}

