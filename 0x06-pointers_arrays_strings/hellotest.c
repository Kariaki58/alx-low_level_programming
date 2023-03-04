#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
char *reverse_string(char *str)
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
	return (str);
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
	int l1, l2, l, c, sum;
	int i, j;
	char *temp;

	l1 = get_length(n1);
	l2 = get_length(n2);

	if (l1 > size_r || l2 > size_r)
		return (NULL);
	c = 0;
	temp = malloc((size_r + 1) * sizeof(char));
	if (temp == NULL)
		return (NULL);

	for (i = l1 - 1, j = l2 - 1, l = 0; i >= 0 || j >= 0 || c > 0; i--, j--, l++)
	{
		sum = c;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		temp[l] = (sum % 10) + '0';
		c = sum / 10;
	}
	temp[l] = '\0';
	if (l > size_r)
	{
		free(temp);
		return (NULL);
	}
	strcpy(r, reverse_string(temp));
	free(temp);
	return (r);
}
