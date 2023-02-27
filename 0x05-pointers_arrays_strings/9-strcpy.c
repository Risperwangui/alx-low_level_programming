#include "main.h"
/**
 * _strcpy - Copies a string pointed to by @src
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{	
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
	return (p);
}
