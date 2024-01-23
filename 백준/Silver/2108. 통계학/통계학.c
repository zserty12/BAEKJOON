#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int compare(int* a, int* b) {
	if (*a > *b) return 1;
	else if (*a < *b) return -1;
	else return 0;
}

int main(void) {
	int N, i;
	scanf("%d", &N);
	if (N <= 0) return 0;
	int* num = (int*)malloc(sizeof(int) * N);
	for (i = 0; i < N; i++)
		scanf("%d", &num[i]);
	qsort(num, N, sizeof(int), compare);
	double sum = 0;
	for (i = 0; i < N; i++) 
		sum += num[i];
	double avg = round(sum / N);
	int range;
	if (N == 1) range = 0;
	else range = abs(num[N - 1] - num[0]);
	int freq[8001] = { 0 }; int mode;
	for (i = 0; i < N; i++) {
		freq[num[i] + 4000]++;
	}
	int maxq = freq[0];
	for (i = 1; i <= 8000; i++) {
		if (maxq < freq[i]) maxq = freq[i];
	}
	int* cnt = (int*)malloc(sizeof(int) * N); int idx = 0;
	for (i = 0; i <= 8000; i++) {
		if (freq[i] == maxq) {
			cnt[idx] = i - 4000;
			idx++;
		}
	}
	if (idx == 1) mode = cnt[0];
	else {
		qsort(cnt, idx, sizeof(int), compare);
		mode = cnt[1];
	}

	printf("%d\n", (int)avg);
	printf("%d\n", num[N / 2]);
	printf("%d\n", mode);
	printf("%d\n", range);
	return 0;
}