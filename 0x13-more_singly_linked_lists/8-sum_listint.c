#include "lists.h"

/**
 * sum_listint - the sum of every element listed
 * @head:pointers to the list
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

if (head == NULL)
	return (0);

while (head->next)
{
	sum += head->n;
	head = head->next;
}
	sum += head->n;
	return (sum);
}
