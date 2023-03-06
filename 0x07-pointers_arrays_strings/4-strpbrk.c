#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: the character.
 */
char *_strpbrk(char *s, char *accept)
{
	int id;

	while (*s)
	{
		for (id = 0; accept[id]; id++)
		{
			if (*s == accept[id])
				return (s);
		}

		s++;
	}

	return ('\0');
}
