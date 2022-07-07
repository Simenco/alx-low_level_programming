#include "lists.h"

/**
 * free_dlistint - frees a list_t list
 * @head: pointer to list to be freed
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		/*free(head->n);*/
		free(head);
		head = temp;
	}
}
