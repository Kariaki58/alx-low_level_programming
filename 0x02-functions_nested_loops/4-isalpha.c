#include "main.h"

/**
 * _isalpha - check if is alpha
 * @c: integer input
 * Return: return value
 */
int _isalpha(int c)
{
	if (((c < 123) && (c > 96)) || ((c <= 90) && (c >= 65)))
		return (1);
	return (0);
}
