#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int L, r = 31, M = 1234567891, res = 0;
	char str[51];
	int i, j;
	scanf("%d %s", &L, str);
	if (L > 50) return 0;
	for (i = 0; i < L; i++) {
		int tmp = 1;
		for (j = 0; j < i; j++) tmp *= r;
		res += (str[i] - 96) * tmp;
	}
	int mod = res / M;
	if (mod > 0) res -= M * mod;
	printf("%d\n", res);
	return 0;
}