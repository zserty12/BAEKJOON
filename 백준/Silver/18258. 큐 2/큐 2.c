#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUEUE_SIZE 2000000

typedef int element;
element data[MAX_QUEUE_SIZE];
int q_front = -1;
int q_rear = -1;
int ary[1000000], j = 0;

int empty()
{
	if (q_front == q_rear) return 1;
	else return 0;
}

void push(element item)
{
	if (q_rear == (MAX_QUEUE_SIZE - 1))
	{
		fprintf(stderr, "큐 포화 상태\n");
		return;
	}
	else data[++(q_rear)] = item;
}

int pop()
{
	if (empty() == 1) return -1;
	else
	{
		int item = data[++(q_front)];
		return item;
	}
}

int size()
{
	return q_rear - q_front;
}

int front()
{
	if (empty() == 1) return -1;
	else return data[q_front + 1];
}

int back()
{
	if (empty() == 1) return -1;
	else return data[q_rear];
}

int main(void)
{
	int N, i, j = 0, value;
	char func[10];
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%s", func);
		if (strcmp(func, "push") == 0)
		{
			scanf("%d", &value);
			push(value);
		}
		else if (strcmp(func, "pop") == 0)
		{
			ary[j] = pop();
			j++;
		}
		else if (strcmp(func, "empty") == 0)
		{
			ary[j] = empty();
			j++;
		}
		else if (strcmp(func, "size") == 0)
		{
			ary[j] = size();
			j++;
		}
		else if (strcmp(func, "front") == 0)
		{
			ary[j] = front();
			j++;
		}
		else
		{
			ary[j] = back();
			j++;
		}
	}
	for (i = 0; i < j; i++) printf("%d\n", ary[i]);
	return 0;
}