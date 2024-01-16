#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int L, r = 31, M = 1234567891;
	long long res = 0;
	char str[51];
	int i;
	scanf("%d %s", &L, str);
	if (L > 50) return 0;
	long long tmp = 1;
	for (i = 0; i < L; i++) {
		res += ((str[i] - 96) * tmp) % M;
		tmp = (tmp *31) % M;
	}
	res %= M;
	printf("%lld\n", res);
	return 0;
}