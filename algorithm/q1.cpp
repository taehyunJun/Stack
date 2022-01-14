#include<stdio.h>
#include<stdlib.h>
#include"IntStack.h"

int Initialize(IntStack* s, int max)
{
	s->ptr = 0;
	if ((s->stk = (int*)calloc(max, sizeof(int))) == NULL)
	{
		s->max = 0;
		return -1;
	}
	s->max = max;
	return 0;
}

int Push(IntStack* s, int x)
{
	if (s->ptr >= s->max)
		return -1;
	s->stk[s->ptr++] = x;
	return 0;
}