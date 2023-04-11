#include "main.h"
#include <string.h>

/**
 * binary_to_uint - binary number to decimal
 * @b: binary
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	size_t str_len;
	int char_num, i;

	num = 0;
	str_len = strlen(b);
	if (!b)
		return (0);
	for (i = 0; i < str_len; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		char_num = b[i] - '0';
		num = 2 * num + char_num;
	}
	return (num);
}
