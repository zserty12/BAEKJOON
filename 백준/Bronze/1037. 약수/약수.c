#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, i, num;
	int list[50];
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &list[i]);
	}
	if (N == 1)
	{
		num = list[0] * list[0];
	}
	else
	{
		int max = list[0];
		int min = list[0];
		for (i = 0; i < N; i++)
		{
			if (max < list[i]) max = list[i];
		}
		for (i = 0; i < N; i++)
		{
			if (min > list[i]) min = list[i];
		}
		num = max * min;
	}
	printf("%d\n", num);
	return 0;
}