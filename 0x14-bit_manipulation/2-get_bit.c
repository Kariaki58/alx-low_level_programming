#include "main.h"

/**
 * get_bit - bit at an index
 * @n: long int n
 * @index: unsigned int index
 * Return: 1 or 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit, status;

	bit = n >> index;
	if (index > 32)
		return (-1);
	status = bit & 1;
	return (status);
}
