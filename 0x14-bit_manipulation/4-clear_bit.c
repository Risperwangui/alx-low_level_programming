#include <stdio.h>
#include "main.h"
/**
 * clear_bit - sets the vaalue of a bit to 0
 * @n: a pointer
 * @index: the index to set the value
 * Return: if it works, 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= -(1 << index);

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return (1);
}
