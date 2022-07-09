#include "lists.h"

/**
 * delete_nodeint_at_index - this function deletes node at a given index
 * @head: head of the linked list
 * @index: location of the node in the list
 * Return: 1 if it succeeded or -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;

	if (index == 0)
	{
		*head = ptr->next->next;
		return (1);
	}

	for (; index > 0; index--)
	{
		if (ptr == NULL || ptr->next == NULL)
			return (-1);

		ptr = ptr->next;
	}
	ptr = ptr->next->next;

	return (1);
}
