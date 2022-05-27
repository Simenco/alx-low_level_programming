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
	size_t num_of_nodes = 0;

	while (h)
	{
		num_of_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (num_of_nodes);
}
