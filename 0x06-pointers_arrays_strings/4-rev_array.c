#include <stdio.h>

/**
 * reverse_array - reverse array
 * @a: array
 * @n: integer
 */
void reverse_array(int *a, int n)
{
	if (!a)
		return;
	int i = 0, j = n - 1, temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}

