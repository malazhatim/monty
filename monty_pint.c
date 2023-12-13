#include "monty.h"
/**
 * pint_mon - prints the top node of the stack
 * @stack: pointer to top of the stack
 * @line_number:integer
 */
void pint_mon(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
		mon_errors(6, line_number);
	printf("%d\n", (*stack)->n);
}
