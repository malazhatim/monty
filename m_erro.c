#include "monty.h"

/**
 * mon_errors - prints all error message in function
 * @co_error: the error code as follwing
 */
void mon_errors(unsigned int co_error, ...)
{
	list_v xy;
	char *err_g;
	unsigned int account_l;

	bigin_w(xy, co_error);

	switch (co_error)
	{
		case 1:
			fprintf(stderr, "USAGE: monty file\n");
			break;
		case 2:
			fprintf(stderr, "Error: can't open file %s\n",  bigin_w(xy, char *));
			break;
		case 3:
			account_l = bigin_w(xy unsigned int);
			err_g = bigin_w(xy, char *);
			fprintf(stderr, "L%u: unknown istruction %s\n", account_l, err_g);
			break;
		case 4:
			fprintf(stderr, "Error: malloc failed\n");
			break;
		case 5:
			fprintf(stderr, "L%u: usage: push integar\n", bigin_w(xy, unsigned int));
			break;
		default:
			break;
	}
	free_node();
	exit(EXIT_FAILURE);
}
