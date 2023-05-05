#include <stdio.h>
#include "main.h"

/**
 * flip_bits - flip_bits flip bit status
 * @n: input 1
 * @m: input 2
 * Return: flip_bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int XOR;
	unsigned int count;

	count = 0;
	XOR = n ^ m;
	while (XOR)
	{
		XOR &= (XOR - 1);
		count++;
	}
	return (count);

}
