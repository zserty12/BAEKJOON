#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define min(a,b) a < b ? a : b

int sq[50000] = { 0 };

int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sq[i] = sq[i - 1] + 1;
		for (int j = 1; j * j <= i; j++) {
			sq[i] = min(sq[i], sq[i - j * j] + 1);
		}
	}
	printf("%d\n", sq[n]);
	return 0;
}