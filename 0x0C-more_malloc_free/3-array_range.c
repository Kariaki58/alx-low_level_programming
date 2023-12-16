#include "main.h"
#include <stdlib.h>


/**
 * array_range - creates an array of integers
 * @min: min
 * @max: max
 * Return: array range
 */
int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min));
	for (i = min; i < max; i++)
		array[i] = i;
	return (array);
}
