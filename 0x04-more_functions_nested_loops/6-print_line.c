#include "main.h"
/**
 * print_line - function to print straight line
 * @n: input value where the line endes
 */
void print_line(int n)
{
	int i;

	if (n == 0)
		_putchar('\n');
	for (i = 0; i < n + 1; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
