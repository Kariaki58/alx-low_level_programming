#include "main.h"
#include <stdio.h>
/**
 * _abs - absolute value
 * @n: integer input n
 * Return: return abs(n);
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
