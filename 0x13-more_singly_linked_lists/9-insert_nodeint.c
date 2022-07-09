#include "lists.h"

/**
 * insert_nodeint_at_index - this function inserts node at a given index
 * @head: head of the linked list
 * @idx: location of the node in the list
 * @n: data to insert
 * Return: the address of the new node or NULL if it failed
 * if not possible to add the new node, return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = ptr;
		*head = new_node;
		return (new_node);
	}

	for (; idx > 1; idx--)
	{
		if (ptr == NULL || ptr->next == NULL)
			return (NULL);

		ptr = ptr->next;
	}
	new_node->next = ptr->next;
	ptr->next = new_node;

	return (new_node);
}
