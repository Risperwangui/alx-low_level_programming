#include "hash_tables.h"
/**
 * hash_table_create - function to create a hash table
 * @size: this is the size of an array
 * Return: if an error occurs, null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int a;

	hash = malloc(sizeof(hash_tablr_t));
	if (hash == NULL)
		return (NULL);

	hash->size = size;
	hash->arraay = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		hash->array[a] = NULL;

	return (hash);
}
		
