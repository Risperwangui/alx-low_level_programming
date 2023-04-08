#include "main.h"
#include <stdio.h>
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: the number
 * @m: the number to flip to
 * Return: the number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ris = n ^ m, king = 0;

	if (ris > 0)
	{
		ris >>= 1;
		king = king + (ris & 1);
	}

	return (king);
}
