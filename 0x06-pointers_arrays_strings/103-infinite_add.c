#include "main.h"

/**
 * get_length - Gets the length of a string.
 * @str: The string.
 *
 * Return: The length of @str.
 */
int get_length(char *str)
{
	int length = 0;

	while (str[length])
		length++;
	return (length);
}

/**
 * reverse_string - Reverses a string.
 * @str: The string.
 *
 * Return: A pointer to the reversed string.
 */
void reverse_string(char *str)
{
	int i, j;
	char temp;
	int length = get_length(str);

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer that the function will use to store the result.
 * @size_r: The buffer size.
 *
 * Return: A pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, carry, sum, len1, len2;

	len1 = get_length(n1);
	len2 = get_length(n2);
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
		i--;
		j--;
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
	reverse_string(r);
	return (r);
}
