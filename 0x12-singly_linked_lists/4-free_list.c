#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list
 * @head: a pointer
 */

void free_list(list_t *head)
{
	list_t *id;

	while (head)
	{
		id = head->next;
		free(head->str);
		free(head);
		head = id;
	}
}
