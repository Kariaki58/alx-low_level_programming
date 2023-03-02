#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result
 * @size_r: Buffer size
 *
 * Return: Pointer to the result, or 0 if result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k = 0, l1 = 0, l2 = 0, sum = 0, carry = 0;
	char *tmp;

	while (n1[l1 + 1])
		l1++;
	while (n2[l2 + 1])
		l2++;
	if (l1 > size_r || l2 > size_r)
		return (0);
	for (i = l1, j = l2; i >= 0 || j >= 0; i--, j--, k++)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		carry = sum / 10;
		r[k] = sum % 10 + '0';
	}
	if (carry)
	{
		r[k] = carry + '0';
		r[k + 1] = '\0';
		tmp = r;
	}
	else
	{
		r[k] = '\0';
		tmp = r + k - 1;
	}
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		tmp[i] ^= tmp[j];
		tmp[j] ^= tmp[i];
		tmp[i] ^= tmp[j];
	}
	return (r);
}
