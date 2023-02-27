#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 10000

typedef int element;
typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
}StackType;

init_stack(StackType* s)
{
	s->top = -1;
}


void push(StackType* s, element item)
{
	if (s->top == (MAX_STACK_SIZE - 1))
	{
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	s->data[++(s->top)] = item;
}

element pop(StackType* s)
{
	if (empty(s) == 1) return -1;
	else return s->data[(s->top)--];
}

int size(StackType* s)
{
	return s->top + 1;
}

int empty(StackType* s)
{
	if (s->top == -1) return 1;
	else return 0;
}

int top(StackType* s)
{
	if (s->top == -1) return -1;
	else return s->data[s->top];
}

int main(void)
{
	int N, i, j = 0, value;
	char func[10];
	int ary[10000];
	StackType s;
	init_stack(&s);
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%s", func);
		if (strcmp(func, "push") == 0)
		{
			scanf("%d", &value);
			push(&s, value);
		}
		else if (strcmp(func, "pop") == 0)
		{
			ary[j] = pop(&s);
			j++;
		}
		else if (strcmp(func, "size") == 0)
		{
			ary[j] = size(&s);
			j++;
		}
		else if (strcmp(func, "empty") == 0)
		{
			ary[j] = empty(&s);
			j++;
		}
		else
		{
			ary[j] = top(&s);
			j++;
		}
	}
	for (i = 0; i < j; i++) printf("%d\n", ary[i]);
	return 0;
}