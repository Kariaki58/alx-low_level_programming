#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string
 * @accept: accept
 * Return: a pointer to the byte in s that matches one of the bytes in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, state = 0;

	for (i = 0; i < strlen(s); i++)
	{
		if (state)
			break;
		for (j =  0; j < strlen(accept); j++)
		{
			if (s[i] == accept[j])
			{
				state++;
				break;
			}
		}
	}
	state++;
	return (s + state);
}
