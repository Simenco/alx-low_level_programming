#include "lists.h"
/**
 * add_node - function add nodes
 * @head: head of list_t
 * @str: string to be added
 * Return: If fail - NULL.
 *         On success - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *copy;
	int len = 0;
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	copy = strdup(str);
	if (copy == NULL)
	{
		free(ptr);
		return (NULL);
	}

	while (str[len])
		len++;

	ptr->str = copy;
	ptr->len = len;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
