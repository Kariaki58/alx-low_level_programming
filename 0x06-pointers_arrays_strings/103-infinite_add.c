#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * infinite_add - add infinite
 * @n1: n1
 * @n2: n2
 * @r: r
 * @size_r: size_r
 * Return: return r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int max_len = (len1 > len2) ? len1 : len2;
	int carry = 0;
	int sum = 0;
	int i, j;

	if (max_len + 1 > size_r)
		return (0);
	r[max_len + 1] = '\0';
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		r[max_len] = ((sum % 10) + '0');
		carry = sum / 10;
		max_len--;
	}
	if (carry)
	{
		if (max_len == -1)
			return 0;
		r[max_len] = carry + '0';
	}
	else if (max_len == 0)
		return (r + 1);
	return (r);
}
