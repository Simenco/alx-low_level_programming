#include "lists.h"
/**
 * insert_dnodeint_at_index - function add nodes at a given position
 * @h: head of list_t
 * @idx: index where the node should be added
 * @n: data to be added
 * Return: If fail - NULL.
 *         On success - the address of the new element.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	/* node that traverses the linked list */
	dlistint_t *ptr = *h;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	/* test if linked list is empty */
	if (idx == 0)
		return (add_dnodeint(h, n));

	while ((idx - 1) != 0)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
		idx--;
	}


	if (ptr->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node->prev = ptr;
	new_node->next = ptr->next;
	ptr->next->prev = new_node;
	ptr->next = new_node;
	return (new_node);
}
