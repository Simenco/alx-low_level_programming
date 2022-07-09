#include "lists.h"

/**
 * free_listint - this function frees a linked list
 * @head: head of the linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		head = head->next;
	}
	free(head->next);
	free(head);
}
