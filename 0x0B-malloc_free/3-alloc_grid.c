#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - grid function
 * @width: width of athe array
 * @height: height of the array
 * Return: return a 2d grid.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	grid = malloc(width * height * sizeof(int *));
	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(sizeof(int));
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
