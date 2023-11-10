#include <stdio.h>
int main(){
    int a,b,x=0;
    printf("请输入n的值和判断的数值："); 
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
