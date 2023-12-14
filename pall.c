#include "monty.h"

/**
 * pall - prints the stack
 * @stck_h: stack head
 * @l_n: no used
 * Return: no return
*/
void pall(stack_t **stck_h, unsigned int l_n)
{
	stack_t *top;
	(void)l_n;

	top = *stck_h;
	if (top == NULL)
		return;
	while (top)
	{
		printf("%d\n", top->n);
		top = top->next;
	}
}
