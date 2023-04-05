#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: a pointer to the address
 * Return: if linked list is empty,return null
 */
int pop_listint(listint_t **head)
{
	listint_t *ris;
	int big;

	ris = *head;
	big = (*head)->n;
	*head = (*head)->next;

	free(ris);
	return (big);

	if (*head == NULL)
		return (0);
