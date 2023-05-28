#include "main.h"

/**
 * _isdigit - check if the input c is digit
 * @c: input digit
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
