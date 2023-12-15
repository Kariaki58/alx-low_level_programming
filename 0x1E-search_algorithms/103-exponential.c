#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _binary_search - search a binary tree
 * @array: array
 * @start: start pos
 * @end: end pos
 * @value: value
 * Return: 1 || -1
*/
int _binary_search(int *array, size_t start, size_t end, int value)
{
	unsigned i;

	while (end >= start)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = start + (end - start) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] < value)
			start = i + 1;
		else
			end = i - 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in sorted array
 * @size: size
 * @value: value
 * Return: idx or size.
*/
int exponential_search(int *array, size_t size, int value)
{
	unsigned bound, end;

	if (!array)
		return (-1);
	bound = 0;
	if (array[bound] != value)
	{
		bound = 1;
		while (bound < size && array[bound] <= value)
		{
			printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
			bound *= 2;
		}
	}
	if (bound < size)
		end = bound;
	else
		end = size - 1;
	printf("Value found between indexes[%d] and [%d]\n", bound / 2, end);
	return (_binary_search(array, bound / 2, end, value));
}
