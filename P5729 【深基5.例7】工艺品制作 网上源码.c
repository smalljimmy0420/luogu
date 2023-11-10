#include <stdio.h>

int main(){
    int a1,a2,a3;//首先输入长宽高
    scanf("%d %d %d",&a1,&a2,&a3);
    int sum=a1*a2*a3;//计算出体积
    int m[101][20][101]={0};//三维数组每个坐标初始化为0
    int b,count=0;//输入数据的数目  计数
    scanf("%d",&b);
    for(int i=0;i<b;i++){//输入b次数据
        int c1,c2,c3,c4,c5,c6;//每次6个数
        scanf("%d %d %d %d %d %d",&c1,&c2,&c3,&c4,&c5,&c6);
        for(int j=c1;j<=c4;j++){//长在c1~c4输入中间
            for(int k=c2;k<=c5;k++){//宽在c2~c5输入中间
                for(int l=c3;l<=c6;l++){//高在c3~c6输入中间
                    m[j][k][l]=1;//如果坐标被访问，就记录为1
                }
            }
        }
    }
    for(int j=0;j<101;j++){//遍历长方体每一个坐标是否被访问过，如果被访问了就为1，看1的个数
        for(int k=0;k<20;k++){
            for(int l=0;l<101;l++){
                if(m[j][k][l]==1){
                    count++;
                }
            }
        }
    }
    printf("%d",sum-count);//总体积减去个数为剩余的体积
    return 0;
}

