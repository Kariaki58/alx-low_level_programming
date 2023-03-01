#include "main.h"
/**
 * reverse_array - function to reverse a string
 * @a: the array input
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1;

	while (i < j)
	{
		int temp = a[j];

		a[j] = a[i];
		a[i] = temp;
		i++;
		j--;
	}
}
