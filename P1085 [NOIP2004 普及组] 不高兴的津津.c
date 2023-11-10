#include "stdio.h"
int main()
{
    int a, b, c[7],i,max=0,counter=0;
    for (i = 0; i < 7; i++)
    {
        scanf("%d %d", &a, &b);
        c[i] = a + b;   //每天上课时间
        if (c[i] > 8)   //判断是否开心
            counter++;
        if (c[i] > max) //寻找最大值
            max = c[i];
    }
    if (counter == 0)   //开心的情况
        printf("%d\n", 0);
    else               //不开心的情况
    {
        for (i = 0; i < 7; i++)  //接下来遍历这个数组
        {
            if (c[i] == max)
            {
                printf("%d\n", i + 1);
                            //输出第一个出现最大值的日期
                break;
            }
        }
    }
    return 0;
}
