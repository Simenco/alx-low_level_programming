#include "lists.h"

/**
 * free_listint - this function frees a linked list
 * @head: head of the linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	free(head->next-next);
	free(head->next);
	free(head);
}
