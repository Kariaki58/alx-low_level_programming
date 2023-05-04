#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - binary conversion
 * @b: first input
 * Return: return decimal
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int deci, num;
	size_t i;
	size_t str;
	char j;

	if (!b)
	{
		printf("here\n");
		return (0);
	}
	str = strlen(b);
	deci = 0;
	for (i = 0; i < str; i++)
	{
		for (j = 'a'; j < 'z'; j++)
		{
			if (b[i] == j)
				return (0);
		}
	}
	for (i = 0; i < str + 1; i++)
	{
		num = b[i] - '0';
		deci += num << (str - i - 1);
	}
	return (deci);
}
