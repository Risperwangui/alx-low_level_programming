#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allcated memory
 * @str: The string
 *
 * Return: return duplicate
 */
char *_strdup(char *str)
{
	char *duplicate;
	int id, length = 0;

	if (str == NULL)
		return (NULL);

	for (id = 0; str[id]; id++)
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	for (id = 0; str[id]; id++)
		duplicate[id] = str[id];

	duplicate[length] = '\0';

	return (duplicate);
}
