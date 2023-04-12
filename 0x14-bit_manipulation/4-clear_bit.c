#include "main.h"

/**
 * clear_bit - clear bit
 * @n: address of a number
 * @index: index of the number
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
