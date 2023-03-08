#include "main.h"
/**
 * sqrt_check - Checks for the square root of c
 * @a: guess at square root
 * @c: number to find square root
 *
 * Return: -1 or square root of c.
 */

int sqrt_check(int a, int c)
{
	if (a * a == c)
	return (a);
	if (a * a > c)
	return (-1);
	return (sqrt_check(a + 1, c));
}

/**
 * _sqrt_recursion - returns the natural sqrt of a number
 * @n: integer to find sqrt of.
 *
 * Return: natural square rootor -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	return (0);
	return (sqrt_check(1, n));
}
