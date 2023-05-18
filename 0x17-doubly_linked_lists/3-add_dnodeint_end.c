#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: pointer
 * @n: pointer
 * Return: the new address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		dlistint_t *a = *head;

		while (a->next != NULL)
			a = a->next;
		a->next = new;
		new->prev = a;
	}

	return (new);
