#include "lists.h"

/**
 * add_nodeint_end - add nodes in the end of the lists
 *@head:pointer to last nodes
 *@n:integer elements of node
 * Return:new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *start;

	start = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (start->next)
	{
		start = start->next;
	}

	start->next = new;
	return (new);
}
