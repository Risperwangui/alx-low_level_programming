#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: the string
 * Return: integer
 */
int _atoi(char *s)

{

	int count = 0;

	int i = 0;

	unsigned int result = 0;

	int index = 0;

	while (s[count] != '\0')

	{

		if (s[count] == '-')

			index++;

		if (s[count] >= 48 && s[count] <= 57)

		{
			i++;

			result = result * 10 + s[count] - '0';

		}

		if (i > 0 && (s[count] < 48 || s[count] > 57))

			break;
		count++;
	}

	if (i == 0)
		return (0);
	if (index % 2 == 0)
		return (result);
	return (result * -1);

}

