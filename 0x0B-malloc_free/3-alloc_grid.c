#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns apointer to a 2D array
 * @width: the width of the 2D array
 * @height: the height of the 2D array
 *
 * Return: if width/height = 0,return  null
 */
int **alloc_grid(int width, int height)
{
	int **two_dim;
	int height_id, width_id;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_dim = malloc(sizeof(int *) * height);

	if (two_dim == NULL)
		return (NULL);

	for (height_id = 0; height_id < height; height_id++)
	{
		two_dim[height_id] = malloc(sizeof(int) * width);

		if (two_dim[height_id] == NULL)
		{
			for (; height_id >= 0; height_id--)
				free(two_dim[height_id]);

			free(two_dim);
			return (NULL);
		}
	}

	for (height_id = 0; height_id < height; height_id++)
	{
		for (width_id = 0; width_id < width; width_id++)
			two_dim[height_id][width_id] = 0;
	}

	return (two_dim);
}
