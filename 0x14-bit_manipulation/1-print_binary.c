#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation
 * @n: number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	while (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
