#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int N, i, j, sum = 0; int flag = 0;
	scanf("%d", &N);
	for (i = 1; i < N; i++) {
		sum = 0; int temp = i;
		while (temp) {
			sum += (temp % 10);
			temp /= 10;
		}
		sum += i;
		if (sum == N) {
			flag = 1;
			break;
		}
	}
	if (flag) printf("%d\n", i);
	else printf("%d\n", 0);
	return 0;
}