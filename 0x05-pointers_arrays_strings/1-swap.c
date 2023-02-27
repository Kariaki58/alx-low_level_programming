#include "main.h"

/**
 * swap_int - function to swap two number
 * @n: input number 1.
 * @m: input number 2.
 */
void swap_int(int *n, int *m)
{
	int temp;

	temp = *n;
	*n = *m;
	*m = temp;
}
