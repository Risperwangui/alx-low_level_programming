#include "main.h"

/**
 * _strncat - can concatenate two string
 * @dest: first string
 * @src: second string
 * @n: counter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{

	int a = 0, b = 0;



	while (dest[a] != '\0')



		a++;

	while (src[b] != '\0' && n > b)

	{

		dest[a] = src[b];



		a++;

		b++;

	}

	if (n > 0)

	{

		dest[a] = '\0';

	}

	return (dest);

}
