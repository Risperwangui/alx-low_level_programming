#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c
 * @c: The character
 * Return: on success, 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

