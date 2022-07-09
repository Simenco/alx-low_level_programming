#include "lists.h"

/**
 * free_listint - this function frees a linked list
 * @head: head of the linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
