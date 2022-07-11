#include "lists.h"

/**
 * delete_nodeint_at_index - this function deletes node at a given index
 * @head: head of the linked list
 * @index: location of the node in the list
 * Return: 1 if it succeeded or -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *ptr = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		ptr->next = NULL;
		free(ptr);
		return (1);
	}

	else if (index - 1 > listint_len(*head))
		return (-1);

	else
	{
		for (i = 0; i < index - 1; i++)
		{
			ptr = ptr->next;
		}
		/* del pointer ponits to the node to be deleted */
		del = ptr->next;
		ptr->next = ptr->next->next;
		del->next = NULL;
		free(del);
		return (1);
	}
}
