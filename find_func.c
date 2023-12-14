#include "monty.h"

/**
 * f_fun - find the appropriate function for the opcode
 * @opcode: opcode
 * @v: argument of opcode
 * @fo:  storage format. If 0 Nodes will be entered as a stack.
 * @n:line number
 * if 1 nodes will be entered as a queue.
 * Return: void
 */
void f_fun(char *opcode, char *v, int n, int fo)
{
	int a = 0;
	int g = 1;

	instruction_t fun_l[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint_mon},
		{"pop", pop},
		{"nop", nop},
		{"swap", swap},
		{"add", mon_add},
		{NULL, NULL}
	};

	if (opcode[0] == '#')
		return;

	for (g = 1, a = 0;  fun_l[a].opcode != NULL; a++)
	{
		if (strcmp(opcode, fun_l[a].opcode) == 0)
		{
			c_fun(fun_l[a].f, opcode, v, n, fo);
			g = 0;
		}
	}
	if (g == 1)
		mon_errors(3, n, opcode);
}


