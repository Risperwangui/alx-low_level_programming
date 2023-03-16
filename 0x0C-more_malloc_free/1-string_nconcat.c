#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes.
 *
 * Return: If the function fails - NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cut;
	unsigned int length = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		length++;

	cut = malloc(sizeof(char) * (length + 1));

	if (cut == NULL)
		return (NULL);

	length = 0;

	for (index = 0; s1[index]; index++)
		cut[length++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		cut[length++] = s2[index];

	cut[length] = '\0';

	return (cut);
}
