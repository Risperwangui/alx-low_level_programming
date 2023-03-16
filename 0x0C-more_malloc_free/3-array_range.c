#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers ordered
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return:  a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *array, id, length;

	if (min > max)
		return (NULL);

	length = max - min + 1;

	array = malloc(sizeof(int) * length);

	if (array == NULL)
		return (NULL);

	for (id = 0; id < length; id++)
		array[id] = min++;

	return (array);
}
