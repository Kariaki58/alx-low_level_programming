#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * print_output - print the program search output
 * @r: r
 * @l: l
*/
void print_output(int *array, int l, int r)
{
	int i;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i < r)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}

/**
 * binary_search - binary search algorithm
 * @array: array
 * @size: size
 * @value: value
 * Return - return idx or -1
*/
int binary_search(int *array, size_t size, int value)
{
	int r, l, mid;

	if (!array)
		return (-1);
	r = size - 1;
	l = 0;
	while (l <= r)
	{
		mid = l + (r - l) / 2;
		print_output(array, l, r);
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	return (-1);
	
}
