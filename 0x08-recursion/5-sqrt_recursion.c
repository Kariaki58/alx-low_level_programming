#include "main.h"

/**
 * _sqrt - function to get the sqrt of n
 * @n: number to sqrt
 * @i: the number sqrt.
 * Return: return the sqrt(n);
 */
int _sqrt(int n, int i)
{
	if (i * i > n || n < 0)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - return the sqrt of a number
 * @n: number
 * Return: return the sqrt(n);
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
