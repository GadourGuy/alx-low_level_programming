#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width > 0 && height > 0)
	{
		array = malloc(height * sizeof(*array));
		if (array != NULL)
		{
			for (i = 0; i < width; i++)
			{
				array[i] = malloc(width * sizeof(**array));
				if (array[i] == NULL)
				{
					while (i--)
						free(array[i]);
					free(array);
					return (NULL);
				}
				for (j = 0; j < width; j++)
					array[i][j] = 0;
			}
		}
	else
		return (NULL);

	}
	return (array);
}
