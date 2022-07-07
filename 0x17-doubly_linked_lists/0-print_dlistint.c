#include "lists.h"

/**
 * print_dlistint - the function prints
 *
 * @h: the input list
 * desc: prints all elements of list_t are printed
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes;

	for (num_nodes = 0; h; num_nodes++)
	{
		if (h == NULL)
			return (num_nodes);
		printf("%d\n", h->n);
		h = h->next;

	}
	return (num_nodes);
}
