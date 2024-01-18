#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num[15][15] = { 0 };
	int T, k, n, i, j;
	for (i = 1; i < 15; i++)
		num[0][i] = i;
	for (j = 1; j < 15; j++)
		num[j][1] = 1;
	for (i = 1; i < 15; i++) 
		for (j = 2; j < 15; j++) 
			num[i][j] = num[i - 1][j] + num[i][j - 1];
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d %d", &k, &n);
		printf("%d\n", num[k][n]);
	}
	return 0;
}