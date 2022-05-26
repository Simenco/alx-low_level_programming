#include "lists.h"
#include <stdio.h>

/**
 * print_listint - the function prints a linked list
 *
 * @h: head pointer
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	/*const listint_t *movptr = NULL;*/
	int num_of_nodes = 0;

	/*if (h == NULL)
		return (num_of_nodes);
	movptr = h;*/
	while (h != NULL)
	{
		num_of_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num_of_nodes);

}
