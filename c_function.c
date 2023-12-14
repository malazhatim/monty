#include "monty.h"

/**
 * c_fun - Calls the required function.
 * @fun: Pointer to the function that is about to be called.
 * @op: string representing the opcode.
 * @v: string representing a numeric value.
 * @n: line numeber for the instruction.
 * @fo: Format specifier. If 0 Nodes will be entered as a stack.
 * if 1 nodes will be entered as a queue.
 */
void c_fun(op_func fun, char *op, char *v, int n, int fo)
{
	stack_t *nod;
	int g;
	int a = 0;

	g = 1;
	if (strcmp(op, "push") == 0)
	{
		if (v != NULL && v[0] == '-')
		{
			v = v + 1;
			g = -1;
		}
		if (v == NULL)
			mon_errors(5, n);
		while (v[a] != '\0')
		{
			if (isdigit(v[a]) == 0)
			{
				mon_errors(5, n);
			}
			a++;
		}
		nod = nw_node(atoi(v) * g);
		if (fo == 0)
			fun(&nod, n);
		if (fo == 1)
			stack_add_fun(&nod, n);
	}
	else
		fun(&head, n);
}
