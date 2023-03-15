#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: A pointer
 * @s2: A pointer
 * Return: the  string
 */

int _strcmp(char *s1, char *s2)

{

	char *string1 = s1;

	char *string2 = s2;

	while (*string1 != '\0' && *string2 != '\0' && *string1 == *string2)

	{

		string1++;

		string2++;

	}

	return (*string1 - *string2);

}
