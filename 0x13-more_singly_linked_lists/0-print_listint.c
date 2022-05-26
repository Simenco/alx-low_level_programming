#include "lists.h"

/**
 * print_listint - the function prints a linked list
 *
 * @h: head pointer
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	listint_t *movptr = NULL;
	int num_of_nodes = 0;

	if (h == NULL)
		return (num_of_nodes);
	movptr = h;
	while (movptr != NULL)
	{
		num_of_nodes++;
		printf("%d", movptr->n);
		movptr = movptr->next;
	}
	return (num_of_nodes);

}
