#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int S = 0;
int cnt = 0;
int idx = 0;

void add(int x) {
	S |= (1 << x - 1);
}

void removed(int x) {
	S &= ~(1 << x - 1);
}

int check(int x) {
	if (S & (1 << x - 1)) return 1;
	else return 0;
}

void toggle(int x) {
	S ^= (1 << x - 1);
}

void all() {
	S = (1 << 20) - 1;
}

void empty() {
	S = 0;
}

int main(void) {
	int M;
	scanf("%d", &M);
	char cmd[10];
	int i, num;
	for (i = 0; i < M; i++) {
		scanf("%s", cmd);
		if (strcmp(cmd, "add") == 0) {
			scanf("%d", &num);
			add(num);
		}
		else if (strcmp(cmd, "remove") == 0) {
			scanf("%d", &num);
			removed(num);
		}
		else if (strcmp(cmd, "check") == 0) {
			scanf("%d", &num);
			printf("%d\n", check(num));
		}
		else if (strcmp(cmd, "toggle") == 0) {
			scanf("%d", &num);
			toggle(num);
		}
		else if (strcmp(cmd, "all") == 0) {
			all();
		}
		else if (strcmp(cmd, "empty") == 0) {
			empty();
		}
	}
	return 0;
}