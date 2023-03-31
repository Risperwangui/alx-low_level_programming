#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints elements of a list_t list
 * @h: The list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t lists = 0;

	while (h)

	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		lists++;
		h = h->next;
	}
	return (lists);
}
