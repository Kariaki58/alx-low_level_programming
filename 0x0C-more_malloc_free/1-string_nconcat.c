#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - string n concatenate
 * @s1: first string input
 * @s2: second string input
 * @n: int count
 * Return: return concat(s1, s2).
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1;
	unsigned int len_s2;
	unsigned int total;
	char *buffer;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	total = len_s1 + len_s2 + 1;
	buffer = malloc(sizeof(int) * total);
	for (i = 0; i < len_s1; i++)
	{
		buffer[i] = s1[i];
	}
	if (n >= len_s2)
	{
		for (i = 0; i < len_s2; i++)
		{
			buffer[i] = s2[i];
		}
	}
	for (i = 0; i < n; i++)
	{
		buffer[len_s1 + i] = s2[i];
	}
	return (buffer);
}
