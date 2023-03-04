#include "main.h"
/**
 * infinite_add - Adds two numbers.
 *
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer where the result will be stored.
 * @size_r: The size of the buffer.
 *
 * Return: If the result can be stored in r - a pointer to the result.
 *         If the result can't be stored in r - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, carry, sum, len1, len2;

	len1 = 0;
	while (n1[len1])
		len1++;
	len2 = 0;
	while (n2[len2])
		len2++;
	if (len1 + 2 > size_r || len2 + 2 > size_r)
		return (0);
	carry = 0;
	i = len1 - 1;
	j = len2 - 1;
	k = 0;
	while (i >= 0 || j >= 0)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		carry = sum / 10;
		r[k] = sum % 10 + '0';
		j--;
		i--;
		k++;
	}
	if (carry)
	{
		if (k + 1 > size_r)
			return (0);
		r[k] = carry + '0';
		k++;
	}
	r[k] = '\0';
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char tmp = r[i];

		r[i] = r[j];
		r[j] = tmp;
	}
	return (r);
}
