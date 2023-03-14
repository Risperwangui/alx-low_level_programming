#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 *
 * Return: on failure,return null
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int id, concat_id = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (id = 0; s1[id] || s2[id]; id++)
		len++;

	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	for (id = 0; s1[id]; id++)
		str[concat_id++] = s1[id];

	for (id = 0; s2[id]; id++)
		str[concat_id++] = s2[id];

	return (str);
}
