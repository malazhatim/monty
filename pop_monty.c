#include "monty.h"
/**
 * pop - add node to stack
 * @head: pointer
 * @l_n: integer
 */
void pop(stack_t **stack, unsigned int l_n)
{
	stack_t *tmp;

	if (stack == NULL || *stack == NULL)
		mon_errors(7, l_n);
	tmp = *stack;
	*stack = tmp->next;
	if(*stack != NULL)
		(*stack)->prev = NULL;
	free(tmp);
}
