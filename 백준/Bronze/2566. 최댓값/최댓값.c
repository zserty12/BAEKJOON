#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) 
{
	int list[9][9] ;
	int max = 0, i, j;
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			scanf("%d", &list[i][j]);
			if (max < list[i][j])
			{
				max = list[i][j];
			}
		}
	}
	printf("%d\n", max);
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (max == list[i][j])
			{
				printf("%d %d\n", i + 1, j + 1);
				break;
			}
		}
	}
	return 0;
}