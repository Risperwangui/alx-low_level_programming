#include "main.h"



/**
 *_strchr - searches for the first occurrence of the character c
 *@s: this is the string to be scanned
 *@c: this is the character to be searched in s
 *Return: 0
 */



char *_strchr(char *s, char c)

{

	int index = 0;

	while (s[index] != 0)

	{

		if (s[index] == c)

			return (s + index);

	index++;

	}

	if (c == 0)

		return (s + index);

	return (0);

}
