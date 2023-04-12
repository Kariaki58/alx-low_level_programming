#include "main.h"
#include <stdlib.h>

/**
 * set_bit - set bit
 * @n: input 1
 * @index: index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int _large;

	_large = sizeof(n) * 8;
	if (index > _large)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
