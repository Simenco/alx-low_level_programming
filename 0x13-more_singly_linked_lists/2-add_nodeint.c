#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - the function adds nodes at the beginning
 *
 * @head: head pointer
 * @n: data of the node to be added
 *
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *movptr = malloc(sizeof(listint_t));

	if (movptr == NULL)
		return (NULL);

	movptr->n = n;
	movptr->next = *head;
	*head = movptr;
	return (movptr);

}
