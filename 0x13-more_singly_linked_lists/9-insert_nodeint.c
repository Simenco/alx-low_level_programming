#include "lists.h"

/**
 * insert_nodeint_at_index - this function inserts node at a given index
 * @head: head of the linked list
 * @idx: location of the node in the list
 * Return: the address of the new node or NULL if it failed
 * if not possible to add the new node, return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		if (idx == 0)
		{
			(*head)->next = new_node;
			new_node->n = n;
			return (new_node);
		}
		return (NULL);
	}

	for (; idx != 0; idx--)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
	}
	
	new_node->next = ptr->next;
	ptr->next = new_node;
	new_node->n = n;

	return (new_node);
}
