#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *length;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	length = memory;

	for (index = 0; index < (size * nmemb); index++)
		length[index] = '\0';

	return (memory);
}
