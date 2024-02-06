#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define min(a,b) a < b ? a : b

int f[1000001] = { 0 };
int main(void) {
	int X; 
	f[1] = 0; f[2] = 1; f[3] = 1;
	for (int i = 4; i <= 1000000; i++) {
		f[i] = f[i - 1] + 1;
		if (i % 3 == 0) f[i] = min(f[i], f[i / 3] + 1);
		if (i % 2 == 0) f[i] = min(f[i], f[i / 2] + 1);
	}
	scanf("%d", &X);
	printf("%d\n", f[X]);
	return 0;
}