#include "lists.h"

/**
* delete_nodeint_at_index - delete a particular node from all the  list at some given index
* @head: header pointers
* @index: index of all  the node to be deleted
* Return: 1 on Success
* Error: -1 on failure
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t;
	listint_t *curr;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	curr = *head;

	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}

	while (i < index && curr->next)
	{
		t = curr;
		curr = curr->next;
		i++;
	}
	if (i < index)
		return (-1);

	t->next = curr->next;
	free(curr);

	return (1);
}
