#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a grid
 * @width: width
 * @height - height
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (!grid)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
		grid[i] = (int *)malloc(width * sizeof(int));

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
