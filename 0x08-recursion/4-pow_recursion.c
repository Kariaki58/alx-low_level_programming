#include "main.h"

/**
 * _pow_recursion - return the value for the pow(x, y);
 * @x: the base input
 * @y: the power input
 * Return: return the pow(x, y);
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
