#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian.
 */
int get_endianness(void)
{
	int number = 1;
	char *end = (char *)&number;

	while (*end == 1)
		return (1);

	return (0);
}
