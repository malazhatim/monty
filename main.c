#include "monty.h"
stack_t *head = NULL;
/**
 * main - point
 * @argc: arguments
 * @argv: array
 * Return: always 0
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		mon_errors(1);
		exit(EXIT_FAILURE);
	}
	file_on(argv[1]);
	node_free();
	return (0);
}
