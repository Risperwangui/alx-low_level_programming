#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - Searches for an integer
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: A pointer to the function
 *
 * Return: If no element matches or size <=0 -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int id;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (id = 0; id < size; id++)
	{
		if (cmp(array[id]) != 0)
			return (id);
	}

	return (-1);
}
