#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int N, i = 1, num = 1;
	scanf("%d", &N);
	if (N == 1) {
		printf("%d\n", 1);
		return 0;
	}
	while (1) {
		num += 6 * i;
		if (N <= num) {
			i++;
			break;
		}
		else i++;
	}
	printf("%d\n", i);
	return 0;
}