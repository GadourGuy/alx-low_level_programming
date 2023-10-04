#include "main.h"

/**
 * free_grid - frees 2 dimensional arrays
 * @grid: func to be freed
 * @height: height of function
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
