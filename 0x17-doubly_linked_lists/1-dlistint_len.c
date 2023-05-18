#include "lists.h"
/**
 * dlistint_len - writing a function that returns number of elements
 * @h: pointer
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
		h = h->next;
	return (a);
}
