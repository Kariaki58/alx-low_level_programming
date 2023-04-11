#include "main.h"
#include <string.h>

/**
 * binary_to_uint - binary number to decimal
 * @b: binary
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int Denum = 0;
	unsigned int bit = 1;
	int i;

	if (b == NULL)
		return (0);
	if (!b)
		return (0);
	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			Denum += bit;
		else if (b[i] != '0')
			return (0);
		bit *= 2;
	}
	return (Denum);
}
