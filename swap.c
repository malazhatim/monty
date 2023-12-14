#include "monty.h"

/**
 * swap- Swaps the top two elements of the stack.
 * @head: Pointer to a pointer pointing to top node of the stack.
 * @l_n: Interger representing the line number of of the opcode.
 */
void swap(stack_t **head, unsigned int l_n)
{
	stack_t *t;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
		secoubd_err(8, l_n, "swap");
	t = (*head)->next;
	(*head)->next = t->next;
	if (t->next != NULL)
		t->next->prev = *head;
	t->next = *head;
	(*head)->prev = t;
	t->prev = NULL;
	*head = t;
}
