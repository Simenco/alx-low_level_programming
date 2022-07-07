#include "lists.h"
/**
 * add_dnodeint - function add nodes
 * @head: head of list_t
 * @n: data to be added
 * Return: If fail - NULL.
 *         On success - the address of the new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head->next;
	*head = new_node;

	new_node->prev = *head;
	*head->prev = NULL;

	return (new_node);
}
