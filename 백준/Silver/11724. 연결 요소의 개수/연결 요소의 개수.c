#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 1001
int map[MAX][MAX];
int visited[MAX] = { 0 };

int dfs(int v, int N) {
	visited[v] = 1;
	for (int i = 1; i <= N; i++) {
		if (!visited[i] && map[v][i])
			dfs(i, N);
	}
}


int main(void) {
	int N, M, i, u, v;
	scanf("%d %d", &N, &M);
	for (i = 0; i < M; i++) {
		scanf("%d %d", &u, &v);
		map[u][v] = 1; map[v][u] = 1;
	}
	int cnt = 0; 
	for (i = 1; i <= N; i++) {
		if (!visited[i]) {
			dfs(i, N); cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}