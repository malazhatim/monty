#include "monty.h"
/**
 * secound_err - all errors
 * @co_error: error code as follwing
 */
void secoubd_err(int co_error, ...)
{
	va_list xy;
	char *err_g;
	int account_l;

	va_start(xy, co_error);

	switch (co_error)
	{
		case 6:
			fprintf(stderr, "L%d: can't pint, stack empty\n", va_arg(xy, int));
			break;
		case 7:
			fprintf(stderr, "L%d: can't pop an empty stack\n", va_arg(xy, int));
			break;
		case 8:
			account_l = va_arg(xy, unsigned int);
			err_g = va_arg(xy, char *);
			fprintf(stderr, "L%d: can't %s, stack too short\n", account_l, err_g);
			break;
		case 9:
			fprintf(stderr, "L%d: division by zero\n", va_arg(xy, unsigned int ));
			break;
		default:
			break;
	}
	node_free();
	exit(EXIT_FAILURE);
}
