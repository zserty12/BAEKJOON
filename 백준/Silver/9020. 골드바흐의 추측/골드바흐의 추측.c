#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_SIZE 10000


void searchprimenum(int* ary, int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (i == 1) ary[i] = 1;
		else if (ary[i] == 1) continue;
		else
		{
			for (int j = 2 * i; j < n; j += i)
				ary[j] = 1;
		}
	}
}

int main(void)
{
	int T, n, i, j;
	int ary[MAX_SIZE] = { 0 };
	int first[MAX_SIZE], second[MAX_SIZE];
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%d", &n);
		searchprimenum(ary, n);
		for (j = n / 2; j > 0; j--)
		{
			if (ary[j] == 0 && ary[n - j] == 0)
			{
				first[i] = j;
				second[i] = n - j;
				break;
			}
		}
	}
	for (i = 0; i < T; i++)
	{
		printf("%d %d\n", first[i], second[i]);
	}
	return 0;
}