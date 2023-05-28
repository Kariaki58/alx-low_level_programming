#include "main.h"

/**
 * _isupper - check if c is an upper case or not
 * @c: integer to check for upper case
 * Return: 1 if uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
