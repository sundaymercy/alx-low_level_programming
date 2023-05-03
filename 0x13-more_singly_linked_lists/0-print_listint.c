#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint - print all the elements in the lists
 * @h: pointer in a list
 * Return: list the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nnodes++;
		h = h->next;
	}
	return (nnodes);
}
