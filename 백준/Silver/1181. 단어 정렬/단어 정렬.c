#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 20000
char word[MAX_SIZE][51];

int compare(char* word1, char* word2) {
	int a = strlen(word1);
	int b = strlen(word2);
	if (a < b) return -1;
	else if (a > b) return 1;
	else
		return strcmp(word1, word2);
}

int main(void) {
	int N, i, j;
	scanf("%d", &N);
	for (i = 0; i < N; i++) 
		scanf("%s", &word[i]);
	qsort(word, N, 51 * sizeof(char), compare);
	printf("%s\n", word[0]);
	for (j = 1; j < N; j++) {
		if (strcmp(word[j-1], word[j]))
			printf("%s\n", word[j]);
	}
	return 0;
}