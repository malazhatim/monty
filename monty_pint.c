#include "monty.h"
/**
 * pint_mon - prints the top node of the stack
 * @stack: pointer to top of the stack
 * @n_monty:integer
 */
void pint_mon(stack_t **stack, unsigned int n_monty)
{
	if (stack == NULL || *stack == NULL)
		mon_errors(6, n_monty);
	printf("%d\n", (*stack)->n);
}
