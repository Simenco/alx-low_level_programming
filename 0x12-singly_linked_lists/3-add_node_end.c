#include "lists.h"
/**
 * add_node_end - function add nodes at the end
 * @head: head of list_t
 * @str: string to be added
 * Return: If fail - NULL.
 *         On success - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *copy;
	int len = 0;

	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	/* node that traverses the linked list */
	list_t *last = *head;

	if (new_node == NULL)
		return (NULL);

	copy = strdup(str);
	if (copy == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
		len++;

	new_node->str = copy;
	new_node->len = len;
	new_node->next = NULL;

	/* test iiflinked list is empty */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return (new_node);
}
