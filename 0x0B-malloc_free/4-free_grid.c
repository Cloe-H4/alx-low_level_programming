#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the allocated space in alloc_grid func.
 * @grid: the pointer to the occupied memory.
 * @height: the number of pointers in grid.
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
