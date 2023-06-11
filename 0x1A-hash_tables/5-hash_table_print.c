#include "hash_tables.h"
/**
 * hash_table_print - function to print a hash table
 * @ht: the pointer
 * Return: If ht is NULL, print nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned char flag = 0;
	hash_node_t *node;
	unsigned long int a;

	if (ht == NULL)
		return;

	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a] != NULL)
		{
			if (flag == 1)
				printf(", ");

			node = ht->array[a];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->nexxt;
				if (node != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
