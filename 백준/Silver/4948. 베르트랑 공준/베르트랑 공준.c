#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_SIZE 250000
int ary[MAX_SIZE] = { 0 };

void searchprimenum(int* ary, int n)
{
	for (int i = 1; i <= 2 * n; i++)
	{
		if (i == 1) ary[i] = 1;
		else if (ary[i] == 1) continue;
		else
			for (int j = 2 * i; j <= 2 * n; j += i)
				ary[j] = 1;
	}
}

int main(void)
{
	int n, i = 0, j;
	int count[123456] = { 0 };
	while (1)
	{
		int cnt = 0;
		scanf("%d", &n);
		if (n == 0) break;
		searchprimenum(ary, n);
		for (j = n + 1; j <= 2 * n; j++)
		{
			if (ary[j] == 0) cnt++;
		}
		count[i] = cnt;
		i++;
	}
	for (j = 0; j < i; j++)
	{
		printf("%d\n", count[j]);
	}
	return 0;
}