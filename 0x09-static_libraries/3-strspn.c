#include "main.h"
/**
 * _strspn - Locates a character in a string
 * @s: This is the main C string to be scanned.
 * @accept: This is the string
 * Return: return count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	int index = 0;

	char *string1, *string2;

	string1 = s;
	string2 = accept;

	i = 0;

	while (string1[i] != '\0')

	{
		j = 0;
		while (string2[j] != '\0')
		{
			if (string2[j] == string1[i])

			{

				index++;

				break;
			}
			j++;
		}
		if (s[i] != accept[j])

		{
			break;
		}

		i++;
	}
	return (index);

}

