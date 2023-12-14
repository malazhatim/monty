#include "monty.h"

/**
 * func_put - line
 * @str: string
 * @nmb_line: line number
 * @clear: clear specifier
 * Return: always 0
 */
int func_put(char *str, int nmb_line, int clear)
{
	char *pt_put;
	char *tm;
	const char *vol;

	vol = "\n";

	if (str == NULL)
		mon_errors(4);
	pt_put = strtok(str, vol);

	if (pt_put == NULL)
		return (clear);
	tm = strtok(NULL, vol);

	if (strcmp(pt_put, "queue") == 0)
		return (1);

	else if (strcmp(pt_put, "stack") == 0)
		return (0);
	f_fun(pt_put, tm, nmb_line, clear);
	return (clear);
}


