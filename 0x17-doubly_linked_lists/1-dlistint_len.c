#include "lists.h"

/**
 * dlistint_len - function
 * @h: input list
 *
 * Return: number of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_elements;

	for (num_elements = 0; h; num_elements++)
	{
		h = h->next;
	}
	return (num_elements);

}
