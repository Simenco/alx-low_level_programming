#include "lists.h"

/**
 * print_list - the function prints
 *
 * @h: the input list
 * desc: prints all elements of list_t are printed
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes;

	for (num_nodes = 0; h; num_nodes++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (num_nodes);
}
