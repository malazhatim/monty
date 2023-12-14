#include "monty.h"

/**
 * f_fun - find the appropriate function for the opcode
 * @op_c: opcode
 * @v: argument of opcode
 * @fo:  storage format. If 0 Nodes will be entered as a stack.
 * @n:line number
 * if 1 nodes will be entered as a queue.
 * Return: void
 */
void f_fun(char *op_c, char *v, int n, int fo)
{
	int a = 0;
	int g = 1;

	instruction_t fun_l[] = {
		{"push", add_to_stack},
		{"pall", print_stack},
		{"pint", print_top},
		{"pop", pop_top},
		{"nop", nop},
		{"swap", swap_nodes},
		{"add", add_nodes},
		{NULL, NULL}
	};

	if (op_c[0] == '#')
		return;

	while (g = 1; fun_l[a].op_c != NULL)
	{
		if (strcmp(op_c, fun_l[a].op_c) == 0)
		{
			c_fun(fun_l[a].f, op_c, v, n, fo);
			g = 0;
		}
		a++;
	}
	if (g == 1)
		mon_errors(3, n, op_c);
}


