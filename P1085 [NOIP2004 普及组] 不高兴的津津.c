#include "stdio.h"
int main()
{
    int a, b, c[7],i,max=0,counter=0;
    for (i = 0; i < 7; i++)
    {
        scanf("%d %d", &a, &b);
        c[i] = a + b;   //ÿ���Ͽ�ʱ��
        if (c[i] > 8)   //�ж��Ƿ���
            counter++;
        if (c[i] > max) //Ѱ�����ֵ
            max = c[i];
    }
    if (counter == 0)   //���ĵ����
        printf("%d\n", 0);
    else               //�����ĵ����
    {
        for (i = 0; i < 7; i++)  //�����������������
        {
            if (c[i] == max)
            {
                printf("%d\n", i + 1);
                            //�����һ���������ֵ������
                break;
            }
        }
    }
    return 0;
}
