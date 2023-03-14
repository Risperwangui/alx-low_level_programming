#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all argsuments
 * @ac: the number of argsuments
 * @av: the array of pointers
 *
 * Return: NULL if ac == 0 or av ==NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int args, id, idx, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (args = 0; args < ac; args++)
	{
		for (id = 0; av[args][id]; id++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	idx = 0;

	for (args = 0; args < ac; args++)
	{
		for (id = 0; av[args][id]; id++)
			str[idx++] = av[args][id];

		str[idx++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
