#include "monty.h"

/**
 * parse - Separates each line into tokens to determine
 * which function to call
 * @buff: line from the file
 * @l_n: line number
 * @fo:  storage format. If 0 Nodes will be entered as a stack.
 * if 1 nodes will be entered as a queue.
 * Return: Returns 0 if the opcode is stack. 1 if queue.
 */

int parse(char *buff, int l_n, int fo)
{
	char *op_c, *v;
	const char *del = "\n ";

	if (buff == NULL)
		mon_errors(4);

	op_c = strtok(buff, del);
	if (op_c == NULL)
		return (fo);
	v = strtok(NULL, del);

	if (strcmp(op_c, "stack") == 0)
		return (0);
	if (strcmp(op_c, "queue") == 0)
		return (1);

	f_fun(op_c, v, l_n fo);
	return (fo);
}

