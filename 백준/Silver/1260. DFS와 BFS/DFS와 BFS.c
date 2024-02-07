#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_VERTICES 1000

typedef struct node {
	int vertex;
	struct node* link;
}node;
typedef node* nodePointer;
nodePointer graph[MAX_VERTICES + 1];
int visited[MAX_VERTICES + 1];
typedef struct queue {
	int item;
	struct queue* link;
}queue;
typedef queue* queuePointer;
queuePointer front, rear;

void dfs(int v) {
	nodePointer w;
	visited[v] = 1;
	printf("%d ", v);
	for (w = graph[v]; w; w = w->link)
		if (!visited[w->vertex])
			dfs(w->vertex);
}

void addq(queuePointer* front, queuePointer* rear, int item) {
	queuePointer tmp = (queuePointer)malloc(sizeof(queue));
	tmp->item = item; tmp->link = NULL;
	if (*front) (*rear)->link = tmp;
	else *front = tmp;
	*rear = tmp;
}

int deleteq(queuePointer* front) {
	queuePointer tmp = *front;
	int item; if (*front == NULL) exit(0);
	item = (*front)->item;
	*front = tmp->link;
	free(tmp);
	return item;
}

void bfs(int v) {
	nodePointer w; visited[v] = 1;
	printf("%d ", v);
	addq(&front, &rear, v);
	while (front) {
		v = deleteq(&front);
		for (w = graph[v]; w; w = w->link)
			if (!visited[w->vertex]) {
				printf("%d ", w->vertex);
				addq(&front, &rear, w->vertex);
				visited[w->vertex] = 1;
			}
	}
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
	scanf("%d %d %d", &N, &M, &start);
	nodePointer np1, np2; int tmp1, tmp2;
	for (i = 0; i < M; i++) {
		scanf("%d %d", &tmp1, &tmp2);
		np1 = (nodePointer)malloc(sizeof(node)); np1->vertex = tmp1; 
		np2 = (nodePointer)malloc(sizeof(node)); np2->vertex = tmp2;
		np1->link = NULL; np2->link = NULL; 
		add(graph, np2, tmp1); add(graph, np1, tmp2);
	}
	for (i = 1; i <= N; i++) visited[i] = 0;
	dfs(start);
	printf("\n");
	for (i = 1; i <= N; i++) visited[i] = 0;
	bfs(start);
	printf("\n");
	return 0;
}
