#include "lists.h"

/**
 * sum_listint - this function returns the sum of all
 * data in a linked list
 * @head: head of the linked list
 * 
 * Return: the sum or 0 if linked list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
