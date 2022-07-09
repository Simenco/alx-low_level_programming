#include "lists.h"

/**
 * get_nodeint_at_index - this function returns the nth node of a linked list
 * @head: head of the linked list
 * @index: location of the node in the list
 * Return: the node or NULL if linked list is empty
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;

	if (head == NULL)
		return (NULL);

	for (; index; index--)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
	}
	return (ptr);
}
