#include "monty.h"

/**
 * nop - Does nothing.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @l_n: Interger representing the line number of of the opcode.
 */
void nop(stack_t **stack, unsigned int l_n)
{
	(void)*stack;
	(void)l_n;
}
