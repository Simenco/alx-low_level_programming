#include "lists.h"

/**
 * free_listint2 - this function frees a linked list
 * and set head to NULL
 * @head: head of the linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
