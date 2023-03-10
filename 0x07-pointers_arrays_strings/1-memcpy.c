#include "main.h"
/**
 * _memcpy - Copies @n bytes from the memory area
 * @dest: A pointer to the memory area
 * @src: The source buffer
 * @n: The number of bytes to copy from @src.
 *
 * Return: A pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
