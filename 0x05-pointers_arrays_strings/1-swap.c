#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap two integers
 * @a: input a
 * @b: input b
 */
void swap_int(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}
