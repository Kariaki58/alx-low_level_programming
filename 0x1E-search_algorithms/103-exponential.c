#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * search_bin - search an array
 * @array: array
 * @low: low
 * @high: high
 * @value: value
 * Return: idx or -1
*/
int search_bin(int *array, unsigned low, unsigned high, int value)
{
	unsigned mid, i;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; ++i)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				putchar(',');
				putchar(' ');
			}
			else
				putchar('\n');
		}
		if (array[mid] == value)
			return mid;
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

/**
 * exponentail_search - Searches for a value in a sorted array
 * @array: array
 * @size: size
 * @value: value
 * Return: idx || -1
*/
int exponential_search(int *array, unsigned size, int value)
{
	unsigned i;
    unsigned low, high;

    if (!array)
        return (-1);
    if (size == 0)
        return (-1);
    if (array[0] == value)
    {
        printf("Value checked array[0] = [%d]\n", array[0]);
        return (0);
    }
    i = 1;
    while (i < size && array[i] <= value)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        i *= 2;
    }
    low = i / 2;
    high = (1 < size) ? i : size - 1;
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	return search_bin(array, low, high, value);
}