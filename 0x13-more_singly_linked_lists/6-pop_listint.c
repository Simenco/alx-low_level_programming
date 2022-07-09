#include "lists.h"

/**
 * pop_listint - this function deletes the head node of a linked list
 * @head: head of the linked list
 * Return: the head node data or 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
		return (0);

	ptr = (*head)->next->next;
	*head = ptr;
}
