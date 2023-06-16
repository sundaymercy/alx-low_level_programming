#include "lists.h"

/**
 * print_dlistint - printed  all the elements of a dlistint list
 * @h: pointer to the first node
 *
 * Return: num of nodes in dlistint list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int a;
	size_t len = 0;

	for (a = 0; h; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
return (len);
}
