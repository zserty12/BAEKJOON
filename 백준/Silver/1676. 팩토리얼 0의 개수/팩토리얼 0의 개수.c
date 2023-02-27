#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, i, num = 0, n;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		n = 5;
		while (1)
		{
			if ((N - i) % n != 0) break;
			else
			{
				num++;
				n *= 5;
			}
		}
	}
	printf("%d", num);
	return 0;
}