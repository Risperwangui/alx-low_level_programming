#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the pointer
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	unsigned long int a;
	hash_node_t *node, *tmp;

	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			node = ht->array[a];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
