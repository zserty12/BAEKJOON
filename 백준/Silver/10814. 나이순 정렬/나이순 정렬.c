#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct member {
	int age;
	int idx;
	char name[101];
}member;



int compare(member* a, member* b) {
	if (a->age < b->age) return -1;
	else if (a->age > b->age) return 1;
	else {
		if (a->idx < b->idx) return -1;
		else if (a->idx > b->idx) return 1;
	}
	return 0;
}

int main(void) {
	int N, i, j;
	scanf("%d", &N);
	member* p_member = (member*)malloc(sizeof(member) * N);
	for (i = 0; i < N; i++) {
		scanf("%d %s", &p_member[i].age, p_member[i].name);
		p_member[i].idx = i;
	}

	qsort(p_member, N, sizeof(member), compare);


	for (i = 0; i < N; i++)
		printf("%d %s\n", p_member[i].age, p_member[i].name);
	free(p_member);
	return 0;
}
