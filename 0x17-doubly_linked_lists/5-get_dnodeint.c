#include "lists.h"

/**
 * get_dnodeint_at_index - this function gets node at index
 * @head: the first node
 * @index: index number starting from 0
 * Return: data at the index specified
 * NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int i = 1;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		if (i == index)
			return (ptr);
		i++;
	}
	return (NULL);

}
