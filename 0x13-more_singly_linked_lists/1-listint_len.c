#include "lists.h"

/**
 * listint_len - the length of all lists
 * @h:pointer to list various elements
 * Return: size of lists
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
