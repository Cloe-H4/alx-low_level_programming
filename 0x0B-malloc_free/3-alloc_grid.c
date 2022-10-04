#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a two dimensional array of intergers
 * @width: the size of the array
 * @height: number of arrays
 *
 * Return: NULL for error and arrays for success
 */

int **alloc_grid(int width, int height)
{
	int **grid, w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(void *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == NULL)
		{
			for (; h >= 0; h--)
				free(grid[h]);
			free(grid);
			return (NULL);
		}
		w = 0;
		while (w < width)
		{
			grid[h][w] = 0;
			w++;
		}
	}
	return (grid);
}
