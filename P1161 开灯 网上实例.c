#include <stdio.h>
 
int is_on[2000000] = { 0 };  // 0 表示灯是关着的，1 表示灯是开着的
 
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)  // 进行 n 次操作
	{
		double a = 0.0;
		int t = 0;
		scanf("%lf %d", &a, &t);
		for (j = 1; j <= t; j++)
		{
			int index = (int)(a * j);  // 数组下标对应编号
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
	// 找到开着的灯的编号
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
