#include <stdio.h>
 
int is_on[2000000] = { 0 };  // 0 ��ʾ���ǹ��ŵģ�1 ��ʾ���ǿ��ŵ�
 
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)  // ���� n �β���
	{
		double a = 0.0;
		int t = 0;
		scanf("%lf %d", &a, &t);
		for (j = 1; j <= t; j++)
		{
			int index = (int)(a * j);  // �����±��Ӧ���
			if (is_on[index])
			{
				is_on[index] = 0;
			}
			else
			{
				is_on[index] = 1;
			}
		}
	}
	// �ҵ����ŵĵƵı��
	for (i = 1; i < 2000000; i++)
	{
		if (is_on[i] == 1)
		{
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}
