#include "lists.h"
/**
 * sum_dlistint - functions that sums all the data
 * @head: the head of the list
 * Return: the sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	while (head)
	{
		count = count + head->n;
		head = head->next;
	}

	return (count);
}
