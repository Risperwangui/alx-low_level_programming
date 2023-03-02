#include "main.h"
/**
 * string_toupper - Changes all lowercase letters
 *                  of a string to uppercase
 * @r: The string to be modified
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *r)
{
	int index = 0;

	while (r[index])
	{
		if (r[index] >= 'a' && r[index] <= 'z')
			r[index] -= 32;

		index++;
	}

	return (r);
}
