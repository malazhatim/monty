#include "monty.h"
/**
 * mon_add - add the top two element
 * @stack: apointer
 * @l_n: intger
 */
void mon_add(stack_t **stack, unsigned int l_n)
{
	int summ;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		mon_errors(8, l_n);
	(*stack) = (*stack)->next;
	summ = (*stack)->n + (*stack)->prev->n;
	(*stack)->n = summ;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
