#include "hash_tables.h"
/**
 * hash_table_set - adding an element in a hash table
 * @ht: A pointer
 * @key: the key to add
 * @value: the value
 * Return: when it fails, 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *val;
	hash_node_t *new;
	unsigned long int index, i;

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val;
			return (1);
		}
	}
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val = strdup(value);
	if (val == NULL)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(val);
		return (0);
	}

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = val;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
