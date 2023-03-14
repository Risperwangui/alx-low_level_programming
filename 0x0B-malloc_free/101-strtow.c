#include "main.h"
#include <stdlib.h>
/**
 * **strtow - splits a string
 * @str: string
 *
 * Return: NULL if fail
 */
char **strtow(char *str)
{
	char **a;
	int i, k, n, count = 0, length = 0, current = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) != ' ')
			count++;
		while (*(str + i) != ' ' && *(str + i))
			i++;
		if (!*(str + i))
			break;
	}
	if (count == 0)
		return (NULL);
	a = malloc(sizeof(char *) * (count + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0, k = i; current < count; i++, length = 0, k = i)
	{
		if (*(str + i) == ' ')
			continue;
		while (*(str + k) != ' ' && *(str + k++))
			length++;
		a[current] = malloc(sizeof(char) * length + 1);
		if (!a[current])
		{
			while (current-- >= 0)
				free(a[current]);
			free(a);
			return (NULL);
		}
		for (n = 0; i < k; i++, n++)
			a[current][n] = *(str + i);
		a[current++][n] = '\0';
	}
	a[count] = NULL;
	return (a);
}
