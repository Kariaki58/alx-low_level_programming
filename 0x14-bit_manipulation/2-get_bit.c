#include "main.h"
#include <stdio.h>

/**
 * get_bit - get bit at a particular bit position
 * @n: decimal number
 * @index: position
 * Return: bit pos
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	bit = n & (1 << index);
	if (bit)
		return (1);
	else if (bit == 0)
		return (0);
	return (-1);
}
