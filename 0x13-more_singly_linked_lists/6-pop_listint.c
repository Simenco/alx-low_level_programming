#include "lists.h"

/**
 * pop_listint - this function deletes the head node of a linked list
 * @head: head of the linked list
 * Return: the head node data or 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	*head = (*head)->next;

	free(ptr);
	return (data);
}
