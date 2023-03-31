#include "lists.h"

/**
 * list_len - Finds number of elemets in a list
 * @h: the linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int lists = 0;

	while (h !=NULL)
{
	lists++;
	h = h->next;
}

	return (lists);
}
