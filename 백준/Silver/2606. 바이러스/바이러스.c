#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTICES 100

typedef struct node {
	int vertex;
	struct node* link;
}node;
typedef node* nodePointer;
nodePointer graph[MAX_VERTICES + 1];
int visited[MAX_VERTICES + 1];

void dfs(int v) {
	nodePointer w;
	visited[v] = 1;
	for (w = graph[v]; w; w = w->link)
		if (!visited[w->vertex])
			dfs(w->vertex);
}

void add(nodePointer* head, nodePointer a, int idx) {
	nodePointer curr;
	if (head[idx] == NULL || head[idx]->vertex > a->vertex) {
		a->link = head[idx]; head[idx] = a;
		return;
	}
	curr = head[idx];
	while (curr->link != NULL && curr->link->vertex < a->vertex) {
		curr = curr->link;
	}
	a->link = curr->link;
	curr->link = a;
}

int main(void) {
	int N, M, start, i;
	scanf("%d %d", &N, &M);
	nodePointer np1, np2; int tmp1, tmp2;
	for (i = 0; i < M; i++) {
		scanf("%d %d", &tmp1, &tmp2);
		np1 = (nodePointer)malloc(sizeof(node)); np1->vertex = tmp1;
		np2 = (nodePointer)malloc(sizeof(node)); np2->vertex = tmp2;
		np1->link = NULL; np2->link = NULL;
		add(graph, np2, tmp1); add(graph, np1, tmp2);
	}
	for (i = 1; i <= N; i++) visited[i] = 0;
	dfs(1);
	int cnt = 0;
	for (i = 1; i <= N; i++) {
		if (visited[i] == 1) cnt++;
	}
	printf("%d\n", cnt - 1);
	return 0;
}