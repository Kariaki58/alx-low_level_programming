#include "main.h"
#include <string.h>

/**
 * binary_to_uint - binary number to decimal
 * @b: binary
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int converter = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		converter = 2 * converter + (b[i] - '0');
	}
	return (converter);
}
