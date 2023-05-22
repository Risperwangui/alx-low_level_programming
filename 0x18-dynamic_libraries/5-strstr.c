#include "main.h"

/**
 * _strstr - first occurence of the substring
 * @haystack: main str to be examined
 * @needle: searched in haystack
 * Return: return 0
 */

char *_strstr(char *haystack, char *needle)

{
	char *index1, *index2;

	while (*haystack != '\0')

	{
		index1 = haystack;

		index2 = needle;

		while (*haystack != '\0' && *index2 != '\0' && *haystack == *index2)

		{
			haystack++;

			index2++;
		}

		if (*index2 == '\0')

			return (index1);
		haystack = index1 + 1;

	}

	return (0);

}
