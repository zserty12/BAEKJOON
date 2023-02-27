#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_SIZE 1000000

int ary[MAX_SIZE] = { 0 };

void search_primenum()
{
	for (int i = 1; i < MAX_SIZE; i++)
	{
		if (i == 1) ary[i] = 1;
		else if (ary[i] == 1) continue;
		else
			for (int j = 2 * i; j < MAX_SIZE; j += i)
				ary[j] = 1;
	}
}

int main(void)
{
	int N, M, i, j;
	scanf("%d %d", &M, &N);
	if (N == 1) return 0;
	search_primenum();
	for (i = M; i <= N; i++)
		if (ary[i] == 0) printf("%d\n", i);
	return 0;
}