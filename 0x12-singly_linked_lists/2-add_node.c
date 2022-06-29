/**
 * add_node - function add nodes
 * @head: head of list_t
 * @str: string to be added
 * Return: If fail - NULL.
 *         On success - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *copy;
	int len;
	list_t *new_member;

	new_member = malloc(sizeof(list_t));
	if (new_member == NULL)
		return (NULL);

	copy = strdup(str);
	if (copy == NULL)
	{
		free(new_member);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new_member->str = copy;
	new_member->len = len;
	new_member->next = *head;

	*head = new_member;

	return (new_member);
}
