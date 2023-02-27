#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, i, j, k, x ,y;
	int sum = 0;
	int ary[100][100] = { 0 };
	scanf("%d", &N);
	for (k = 0; k < N; k++)
	{
		scanf("%d %d", &x, &y);
		for (i = x; i < x + 10; i++)
		{
			for (j = y; j < y + 10; j++)
			{
				if (ary[i][j] == 1) continue;
				ary[i][j] = 1;
			}
		}
	}
	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (ary[i][j] == 1) sum++;
		}
	}
	printf("%d\n", sum);
	return 0;
}