#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int T, N, i;
	int fibonacci[41][2] = { 0 };
	fibonacci[0][0] = 1; fibonacci[0][1] = 0; 
	fibonacci[1][0] = 0; fibonacci[1][1] = 1; 
	for (i = 2; i <= 40; i++) {
		fibonacci[i][0] = fibonacci[i - 1][0] + fibonacci[i - 2][0];
		fibonacci[i][1] = fibonacci[i - 1][1] + fibonacci[i - 2][1];
	}
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d", &N);
		printf("%d %d\n", fibonacci[N][0], fibonacci[N][1]);
	}
	return 0;
}