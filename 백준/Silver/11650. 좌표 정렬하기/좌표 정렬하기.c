#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct coord {
	int x;
	int y;
}coord;

int compare(coord* a, coord* b) {
	if (a->x > b->x) return 1;
	else if (a->x < b->x) return -1;
	else {
		if (a->y > b->y) return 1;
		else if (a->y < b->y) return -1;
	}
	return 0;
}

int main(void) {
	int N, i;
	scanf("%d", &N);
	coord* arr = (coord*)malloc(sizeof(coord) * N);
	for (i = 0; i < N; i++) 
		scanf("%d %d", &arr[i].x, &arr[i].y);

	qsort(arr, N, sizeof(coord), compare);

	for (i = 0; i < N; i++) 
		printf("%d %d\n", arr[i].x, arr[i].y);
	free(arr);
	return 0;
}