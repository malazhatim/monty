#include "monty.h"
/**
 * stack_add_fun - add node to stack
 * node_new: poibter to new node
 * @am: integer
 */
void stack_add_fun(stack_t **node_new, __attribute__((unused)) unsigned int am)
{
	stack_t *first;

	if (node_new == NULL || *node_new == NULL)
		exit(EXIT_FAILURE);

	if (head == NULL)
	{
		head = *node_new;
		return;
	}
	first = head;
	head = *node_new;
	head->next = first;
	first->prev = head;
}
