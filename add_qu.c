#include "monty.h"
/**
 * add_to_queue - Adds a node to the queue.
 * @n_nod: Pointer to the new node.
 * @n: line number of the opcode.
 */
void add_to_queue(stack_t **n_nod, __attribute__((unused))unsigned int n)
{
	stack_t *t;
	stack_t *head = NULL;

	if (n_nod == NULL || *n_nod == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *n_nod;
		return;
	}
	t = head;
	while (t->next != NULL)
		t = t->next;

	t->next = *n_nod;
	(*n_nod)->prev = t;

}
