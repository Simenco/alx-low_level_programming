#include "lists.h"

/**
 * sum_dlistint - this function returns the sum of all data(n) of a DLL
 * @head: first element of the list
 *
 * Return: the sum of n, 0 if its an empty list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
