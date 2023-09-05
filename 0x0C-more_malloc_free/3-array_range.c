#include <stdlib.h>
#include "main.h"

/**
 * array_range - array range
 * @min: min
 * @max: max
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int *array, i, j;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (min + max) + 1);
	j = 0;
	for (i = min; i <= max; i++)
		array[j++] = i;
	return (array);
}
