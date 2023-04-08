#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: a pointer
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int length;
	unsigned int number = 0, ris = 1;

	for (length = 0; b[length];)
		length++;

	if (b == '\0')
		return (0);

	for (length = length - 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		number += (b[length] - '0') * ris;
		ris = ris * 2;

	}

	return (number);
}
