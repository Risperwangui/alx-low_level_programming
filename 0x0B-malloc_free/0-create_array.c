#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array
 * @size: The size of an array
 * @c: The character to be intialized
 *
 * Return: returns the size
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int id;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (id = 0; id < size; id++)
		array[id] = c;
	return (array);
}
