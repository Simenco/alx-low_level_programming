#include "lists.h"

/**
 * list_len - function
 * @h: input list
 *
 * Return: number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t num_elements;

	for (num_elements = 0; h; num_elements++)
	{
		num_elements++;
		h = h->next;
	}
	return (num_elements);

}
