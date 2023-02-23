#include <ctype.h>
#include "main.h"
/**
 * _isupper - check if a character is uppercase
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, 0 is returned
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
