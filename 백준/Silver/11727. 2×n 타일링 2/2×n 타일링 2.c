#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, n;
	int f[1001] = { 0 };
	f[1] = 1;
	f[2] = 3;
	scanf("%d", &n);
	for (i = 3; i <= n; i++)
		f[i] = (2*f[i - 2] + f[i - 1]) % 10007;
	printf("%d\n", f[n]);
	return 0;
}
