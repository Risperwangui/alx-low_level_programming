#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns number of elements in a linked list.
 * @h: a pointer
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t list = 0;

	while (h)
	{
		list++;
		h = h->next;
	}
	return (list);
}
