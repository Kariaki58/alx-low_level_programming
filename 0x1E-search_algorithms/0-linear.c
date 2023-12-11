#include <stdio.h>
#include "search_algos.h"


/**
 * linear_search - searches for a value in an array
 * @array: array
 * @size: size of array
 * @value: value
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
		else
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	return (-1);
}