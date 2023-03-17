#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocates a memory block
 * @ptr: A pointer to the memory
 * @old_size: The size in bytes
 * @new_size: The size in bytes
 *
 * Return: If new_size is equal to zero, and ptr is not NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *memory;
	char *pointer_copy, *id;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		memory = malloc(new_size);

		if (memory == NULL)
			return (NULL);

		return (memory);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	pointer_copy = ptr;
	memory = malloc(sizeof(*pointer_copy) * new_size);

	if (memory == NULL)
	{
		free(ptr);
		return (NULL);
	}

	id = memory;

	for (index = 0; index < old_size && index < new_size; index++)
		id[index] = *pointer_copy++;

	free(ptr);
	return (memory);
}
