#include "main.h"
#include <stdio.h>

/**
 * print_array - print array of a
 * @a: array
 * @n: size of array
 */
void print_array(int *a, int n)
{
	int i;

	if (n < 0)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
