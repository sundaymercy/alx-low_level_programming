#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a dlistint_t list.
 * @head: pointer to first node
 * @n: value in the new node
 *
 * Return: this is the address of a new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head != NULL)
	{
		new->next = *head;
		(*head)->prev = new;
	}

	*head = new;

	return (*head);
}
