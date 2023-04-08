#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit
 * @n: the bit
 * @index: the index to gwt the value
 * Return: If an error occurs,-1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if ((n & (1 << index)) == 0)
		return (0);


	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return (1);
}
