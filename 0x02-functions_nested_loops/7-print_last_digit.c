#include "main.h"
/**
 * print_last_digit - get the last digit of a number
 * @n: integer value n
 * Return: return n
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n *= -1;
	last_digit = n % 10;
	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
