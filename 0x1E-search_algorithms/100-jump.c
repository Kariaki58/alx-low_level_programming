#include "search_algos.h"
#include <stdio.h>
#include <math.h>


/**
 * jump_search - searches for a value in a sorted array
 * @array: array
 * @size: size
 * @value: value
 * Return - return integers
*/
int jump_search(int *array, size_t size, int value)
{
	int a, b;

	if (!array)
		return (-1);
	a = 0;
	b = (int)sqrt((int) size);
	printf("Value checked array[%d] = [%d]\n", a, a);
	
	while (array[(int)fmin(b, (int)size) - 1] < value)
	{
		a = b;
		b = b + (int)sqrt((int) size);
		if (a >= (int)size)
			return (-1);
		printf("Value checked array[%d] = [%d]\n", a, a);
	}
	printf("Value found between indexes [%d] and [%d]\n", a, a);
	while (array[a] < value)
	{
		a = a + 1;
		if (a == fmin(b, (int)size))
			return (-1);
	}
	if (array[a] == value)
		return (a);
	else
		return (-1);
}
