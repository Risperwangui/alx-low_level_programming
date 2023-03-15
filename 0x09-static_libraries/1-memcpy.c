#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: destination for our memory
 * @src: source to copy from
 * @n: number of characters to copy
 * Return: pointer back to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{

	int index = 0;



	while (n > 0)

	{

		dest[index] = src[index];

		index++;

		n--;

	}

	return (dest);

}
