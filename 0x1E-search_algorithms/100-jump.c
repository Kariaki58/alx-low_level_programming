#include "search_algos.h"
#include <stdio.h>
#include <math.h>


/**
 * jump_search - searches for a value in a sorted array
 * @array: array
 * @size: size
 * @value: value
 * Return: return integers
*/
int jump_search(int *array, size_t size, int value)
{
	int i, b, a, prev;

	if (array == NULL || size == 0)
		return (-1);

	b = (int)sqrt((int)size);
	prev = i = a = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		prev = i;
		a += 1;
		i = a * b;
	} while (i < (int)size && array[i] < value);
	printf("Value found between indexes [%d] and [%d]\n", prev, i);
	while (prev <= i && prev < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev += 1;
	}
	return (-1);
}
