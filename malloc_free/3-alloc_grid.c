#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Each element of the grid is initialized to 0.
 * The function returns NULL on failure.
 * If width or height is 0 or negative, it returns NULL.
 * The returned pointer points to the allocated 2-dimensional array.
 *
 * Return: On success, returns a pointer to the allocated 2-dimensional
 * array.
 * Returns NULL on failure or if width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < heigth; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
