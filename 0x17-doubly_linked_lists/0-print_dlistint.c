#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function to print all the elements in a list
 * @h: pointer to the start
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}

