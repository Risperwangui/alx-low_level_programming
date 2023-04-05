#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: a pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *ris;

	while (*head)
	{
		ris = (*head)->next;
		free(*head);
		*head = ris;
	}

	if (head == NULL)
		return;

	head = NULL;
}
