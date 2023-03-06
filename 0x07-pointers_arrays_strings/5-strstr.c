#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: result.
 */

char *_strstr(char *haystack, char *needle)
{
	int id;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		id = 0;

		if (haystack[id] == needle[id])
		{
			do {
				if (needle[id + 1] == '\0')
					return (haystack);

				id++;

			} while (haystack[id] == needle[id]);
		}

		haystack++;
	}

	return ('\0');
}
