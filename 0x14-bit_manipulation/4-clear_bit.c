#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n))
		return (-1);
	*n = *n & (~(1 << index));
}