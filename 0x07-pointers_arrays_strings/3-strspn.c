#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: bytes given s.
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
