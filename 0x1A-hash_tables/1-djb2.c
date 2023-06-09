#include "hash_tables.h"

/**
 * hash_djb2 - implementing the djb2 algorithm
 * @str: the string
 * Return: The hash that is calculated
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int ht;
	int a;

	ht = 5381;
	while ((a = *str++))
		ht = ((ht << 5) + ht) + c;

	return (ht);
}


