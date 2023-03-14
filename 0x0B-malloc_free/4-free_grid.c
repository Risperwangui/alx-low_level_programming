#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D array of integers
 * @grid: the 2D array of integers to be freed
 * @height: The height of the grid
 */
void free_grid(int **grid, int height)
{
	int id;

	for (id = 0; id < height; id++)

		free(grid[id]);
	free(grid);
}
