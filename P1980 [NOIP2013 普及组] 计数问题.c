#include <stdio.h>
int main(){
    int a,b,x=0;
    printf("������n��ֵ���жϵ���ֵ��"); 
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a;i++){
        int d=i;
        while(d>0){
            int c=d%10;
            d=d/10;
            if(c==b){
                x++;
            }
        }
    }
    printf("%d",x);
    return 0;
}
