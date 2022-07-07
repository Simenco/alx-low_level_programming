#include "lists.h"
/**
 * add_dnodeint_end - function add nodes at the end
 * @head: head of list_t
 * @n: data to be added
 * Return: If fail - NULL.
 *         On success - the address of the new element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	/* node that traverses the linked list */
	dlistint_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	/* test if linked list is empty */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	new_node->prev = last->prev;
	return (new_node);
}
