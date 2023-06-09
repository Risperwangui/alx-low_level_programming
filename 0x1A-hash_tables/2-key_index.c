#include "hash_tables.h"
/**
 * key_index - gets the index of the key/value
 * @key:  the key for the index
 * @size: The size of the array
 * Return: The index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % szie);
}
