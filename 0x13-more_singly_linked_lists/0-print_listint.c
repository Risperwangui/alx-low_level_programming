#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of listint_t
 * @h: pointer to the head
 *
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int list = 0;

	while (h)
	{
		list++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (list);
}
