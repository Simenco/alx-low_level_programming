#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - the function adds nodes at the end
 *
 * @head: head pointer
 * @n: data of the node to be added
 *
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *movptr;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (*head == NULL)
		*head = tmp;

	else
	{
		movptr = *head;
		while (movptr->next != NULL)
			movptr = movptr->next;
		movptr->next = tmp;
	}

	return (movptr);

}
