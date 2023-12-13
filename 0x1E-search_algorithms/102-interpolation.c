#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * interpolation_search - searches for a value in a sorted array
 * @array: array
 * @size: size
 * @value: value
 * Return: return idx || -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high;
	size_t pos;

	if (!array)
		return (-1);
	high = (int)size - 1;
	while (
			(array[high] != array[low]) &&
			(value >= array[low]) &&
			(value <= array[high]))
	{
		pos = low + ((
					(double)(high - low) /
					(array[high] - array[low])) *
				(value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return pos;
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	if (value == array[low])
		return (low);
	return (-1);
}
