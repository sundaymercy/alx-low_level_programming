#include "lists.h"
/**
 * pop_listint - delete all the head node
 *@head: pointer to the lists
 *Return: all  head node's data
 */
int pop_listint(listint_t **head)
{
listint_t *t;
int n;

t = *head;
	if (t == NULL)
		return (0);
*head = t->next;
n = t->n;
free(t);
return (n);
}
