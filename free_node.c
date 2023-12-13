#include "monty.h"

/**
 * nw_node - create new node 
 * @n: number iside the node
 * Return: on success point  to  a node otherwise null
 */
stack_t *nw_node(int n)
{
	stack_t *nw;

	nw = malloc(sizeof(stack_t));
	if (nw == NULL)
		mon_errors(4);
	nw->next = NULL;
	nw->prev = NULL;
	nw->n = n;
	return (nw);
}
/**
 * free_n - free list
 */
void node_free(void)
{
	stack_t *aux;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
