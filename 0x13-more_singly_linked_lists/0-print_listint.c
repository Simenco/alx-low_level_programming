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
		printf("%d\n", h->n);
		h = h->next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}
