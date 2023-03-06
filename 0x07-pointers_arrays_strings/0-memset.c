#include "main.h"
/**
 * _memset - Fills the first n bytes of the memory area.
 * @s: Points to the memory area
 * @b: Character to be filled.
 * @n: Number of bytes to be filled
 *
 * Return: A pointer to be filled.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int id;

	for (id = 0; id < n; id++)
	{
		s[id] = b;
	}
	return (s);
}

